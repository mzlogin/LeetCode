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
    int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 0; i < 32; i++) {
            count += (0x1&(n>>i));
        }
    
        return count;
    }
};