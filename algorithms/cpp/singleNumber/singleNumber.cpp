/**
 * Source : https://leetcode.com/problems/single-number/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-10-30
 * */

/**
 * Problem:
 * Given an array of integers, every element appears twice except for one. Find that single one.
 *
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for(int i = 0; i < nums.size(); ++i) {
            ret ^= nums[i];
        }
        return ret;
    }
};
