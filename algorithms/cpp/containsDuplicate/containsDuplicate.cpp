/**
 * Source : https://leetcode.com/problems/contains-duplicate/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-10
 * */

/**
 * Problem:
 * Given an array of integers, find if the array contains any duplicates. Your
 * function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numset(nums.begin(), nums.end());
        return numset.size() != nums.size();
    }
};
