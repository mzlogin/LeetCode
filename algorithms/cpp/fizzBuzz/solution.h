/**
 * Source : https://leetcode.com/problems/fizz-buzz/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-10-29
 * */

/**
 * Problem:
 * Write a program that outputs the string representation of numbers from 1 to n.
 *
 * But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.
 * 
 * Example:
 * 
 * n = 15,
 * 
 * Return:
 * [
 *     "1",
 *     "2",
 *     "Fizz",
 *     "4",
 *     "Buzz",
 *     "Fizz",
 *     "7",
 *     "8",
 *     "Fizz",
 *     "Buzz",
 *     "11",
 *     "Fizz",
 *     "13",
 *     "14",
 *     "FizzBuzz"
 * ]
 */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vec(n);
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                vec[i - 1] = "FizzBuzz";
            } else if (i % 5 == 0) {
                vec[i - 1] = "Buzz";
            } else if (i % 3 == 0) {
                vec[i - 1] = "Fizz";
            } else {
                stringstream ss;
                ss << i;
                vec[i - 1] = ss.str();
            }
        }
        return vec;
    }
};
