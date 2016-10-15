/**
 * Source : https://leetcode.com/problems/number-of-1-bits/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-14
 * */

/**
 * Problem:
 * Write a function that takes an unsigned integer and returns the number of
 * ’1' bits it has (also known as the Hamming weight).
 *
 * For example, the 32-bit integer ’11' has binary representation
 * 00000000000000000000000000001011, so the function should return 3.
 */

class Solution {
public:
    // Use `((n >> i) & 1) == 1` to judge whether the i bits of n is 1 or not.
    int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 0; i < 32; i++) {
            count += (0x1&(n>>i));
        }

        return count;
    }

    // Use `n = n & (n - 1)` to remove the last 1 bit of n.
    int hammingWeight2(uint32_t n) {
        int count = 0;
        while (n > 0) {
            n = n & (n-1); // this can remove the most right 1
            count++;
        }
        return count;
    }

    //Steps:
    //1. Make 2 bits a group, storage 1s in themeself.
    //2. Make 4 bits a group, storage 1s in themeself.
    //3. Make 8 bits a group, storage 1s in themeself.
    //4. Make 16 bits a group, storage 1s in themeself.
    //5. Make 32 bits a group, storage 1s in themeself.
    int hammingWeight3(uint32_t n) {
        n = (n & 0x55555555) + ((n & 0xaaaaaaaa) >> 1);
        n = (n & 0x33333333) + ((n & 0xcccccccc) >> 2);
        n = (n & 0x0f0f0f0f) + ((n & 0xf0f0f0f0) >> 4);
        n = (n & 0x00ff00ff) + ((n & 0xff00ff00) >> 8);
        n = (n & 0x0000ffff) + ((n & 0xffff0000) >> 16);

        return n;
    }

    // A data array storaged how many 1 bits 0-255 has, then split unsigned int into 4 unsigned char, get every unsinged char's 1 bits, then sum them.
    int hammingWeight4(uint32_t n) {
        int data[256] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,4,5,5,6,5,6,6,7,5,6,6,7,6,7,7,8};
        unsigned char* p = (unsigned char*) &n;
        return data[p[0]]+data[p[1]]+data[p[2]]+data[p[3]];
    }
};
