/**
 * Source : https://leetcode.com/problems/power-of-three/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-03-25
 * */

/**
 * Problem:
 * Given an integer, write a function to determine if it is a power of three.
 *
 * Follow up:
 * Could you do it without using any loop / recursion?
 */

class Solution {
public:
    bool isPowerOfThree(int n) {
        bool result = false;
        while (n > 0) {
            if (1 == n) {
                result = true;
                break;
            }

            if (n % 3 != 0) {
                break;
            }

            n /= 3;
        }
        return result;
    }

    /**
     * In C++, INT_MAX is 2147483647.
     *
     * use 3**5 means pow(3,5).
     *
     * 3**19 < 2147483647 < 3**20 
     *
     * So if x is pow of 3, `3**19 % x == 0`. (This just work with prime number.)
     */
    bool isPowerOfThree2(int n) {
        return (n > 0) && (1162261467 % n == 0);
    }
};
