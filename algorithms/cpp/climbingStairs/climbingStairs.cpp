/**
 * Source : https://leetcode.com/problems/climbing-stairs/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-12-02
 * */

/**
 * Problem:
 * You are climbing a stair case. It takes n steps to reach to the top.
 *
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can
 * you climb to the top?
 */

class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 1;
        for (int i = 2; i <= n; i++) {
            int c = a;
            a = b;
            b += c;
        }
    
        return b;
    }
};
