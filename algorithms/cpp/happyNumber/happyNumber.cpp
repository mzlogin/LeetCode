/**
 * Source : https://leetcode.com/problems/happy-number/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-12-08
 * */

/**
 * Problem:
 * Write an algorithm to determine if a number is "happy".
 * 
 * A happy number is a number defined by the following process: Starting with
 * any positive integer, replace the number by the sum of the squares of its
 * digits, and repeat the process until the number equals 1 (where it will
 * stay), or it loops endlessly in a cycle which does not include 1. Those
 * numbers for which this process ends in 1 are happy numbers.
 * 
 * Example: 19 is a happy number
 * 
 * 1<sup>2</sup> + 9<sup>2</sup> = 82
 * 8<sup>2</sup> + 2<sup>2</sup> = 68
 * 6<sup>2</sup> + 8<sup>2</sup> = 100
 * 1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1
 */

class Solution {
public:
    bool isHappyNum(int n, vector<int>& vec) {
        if (1 == n) {
            return true;
        } else if (0 >= n) {
            return false;
        }
    
        int m = 0;
    
        while (n > 0) {
            int k = n % 10;
            m = m + k * k;
            n /= 10;
        }
    
        if (find(vec.begin(), vec.end(), m) != vec.end()) {
            return false;
        } else {
            vec.push_back(m);
            return isHappyNum(m, vec);
        }
    }
    
    bool isHappy(int n) {
        vector<int> vec;
    
        vec.push_back(n);
    
        return isHappyNum(n, vec);
    }
};
