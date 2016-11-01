/**
 * Source : https://leetcode.com/problems/sum-of-two-integers/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-11-02
 * */

/**
 * Problem:
 * Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
 * 
 * Example:
 * Given a = 1 and b = 2, return 3.
 */

class Solution {
public:
    // a + b = (a ^ b) + ((a & b) << 1)
    //   ^     -------   --------------
    //   |        |            |
    //   |        v            v
    //   |      new a        new b   
    //   |        |            |
    //   |        +-----+------+
    //   |              |
    //   +--------------+
    // iteration until b == 0
    int getSum(int a, int b) {
        while (b) {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};
