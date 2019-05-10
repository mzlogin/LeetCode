/**
 * Source : https://leetcode.com/problems/to-lower-case/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2019-05-11
 * */

/**
 * Problem:
 *
 * Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
 * 
 * Example 1:
 *  Input: "Hello"
 *  Output: "hello"
 *
 * Example 2:
 *  Input: "here"
 *  Output: "here"
 *
 * Example 3:
 *  Input: "LOVELY"
 *  Output: "lovely"
 */ 

class Solution {
public:
    string toLowerCase(string str) {
        string result = str;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }
};
