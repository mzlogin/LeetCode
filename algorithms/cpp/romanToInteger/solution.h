/**
 * Source : https://leetcode.com/problems/roman-to-integer/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-21
 * */

/**
 * Problem:
 * Given a roman numeral, convert it to an integer.
 *
 * Input is guaranteed to be within the range from 1 to 3999.
 */

class Solution {
public:
    int romanToInt(string s) {
        size_t len = s.length();
    
        int sum = 0;
        for (int i = len - 1; i >= 0; i--) {
            switch (s[i]) {
            case 'I':
                if (i<len-1 && (s[i+1] == 'V' || s[i+1] == 'X')) {
                    sum -= 1;
                } else {
                    sum += 1;
                }
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                if (i<len-1 && (s[i+1] == 'L' || s[i+1] == 'C')) {
                    sum -= 10;
                } else {
                    sum += 10;
                }
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                if (i<len-1 && (s[i+1] == 'D' || s[i+1] == 'M')) {
                    sum -= 100;
                } else {
                    sum += 100;
                }
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                break;
            }
        }
    
        return sum;
    }
};
