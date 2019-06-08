/**
 * Source : https://leetcode.com/problems/two-sum/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2019-06-08
 * */

/**
 * Problem:
 *
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * 
 * Example:
 * 
 *   Given nums = [2, 7, 11, 15], target = 9,
 * 
 *   Because nums[0] + nums[1] = 2 + 7 = 9,
 *   return [0, 1].
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> tmp;
        for (int i = 0; i < nums.size(); i++) {
            if (tmp.empty()) {
                tmp[target - nums[i]] = i;
                continue;
            }

            map<int, int>::iterator iter = tmp.find(nums[i]);
            if (iter != tmp.end()) {
                result.push_back(iter->second);
                result.push_back(i);
                break;
            } else {
                tmp[target - nums[i]] = i;
            }
        }
        return result;
    }
};
