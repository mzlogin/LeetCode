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
        return (n > 0) && (1162261467 % n == 0);
    }
};
