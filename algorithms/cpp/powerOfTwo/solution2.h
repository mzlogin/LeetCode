/**
 * Source : https://leetcode.com/problems/power-of-two/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-01-01
 * */

/**
 * Problem:
 * Given an integer, write a function to determine if it is a power of two.
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};
