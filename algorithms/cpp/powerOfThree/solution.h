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
};
