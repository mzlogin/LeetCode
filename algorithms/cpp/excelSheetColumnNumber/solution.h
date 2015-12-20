/**
 * Source : https://leetcode.com/problems/excel-sheet-column-number/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-11
 * */

/**
 * Problem:
 * Related to question Excel Sheet Column Title
 *
 * Given a column title as appear in an Excel sheet, return its corresponding column number.
 *
 * For example:
 *
 *     A -> 1
 *     B -> 2
 *     C -> 3
 *     ...
 *     Z -> 26
 *     AA -> 27
 *     AB -> 28
 */

class Solution {
public:
    int titleToNumber(string s) {
        int factor = 1;
        int len = s.size();
        int sum = 0;
        for (int i = len - 1; i >= 0; i--) {
            sum += (s[i] - 'A' + 1) * factor;
            factor *= 26;
        }
        return sum;
    }
};
