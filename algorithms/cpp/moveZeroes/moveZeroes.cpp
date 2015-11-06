/**
 * Source : https://leetcode.com/problems/move-zeroes/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-06
 * */

/**
 * Problem:
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 *
 * For example, given nums = [0, 1, 0, 3, 12], after calling your function,
 * nums should be [1, 3, 12, 0, 0].
 *
 * Note:
 *   1. You must do this in-place without making a copy of the array.
 *   2. Minimize the total number of operations.
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int flag = 0;
        int pos = 0;
    
        while (flag < len) {
            while (flag < len && 0 != nums[flag]) {
                flag++;
            }
    
            if (flag >= len - 1) {
                break;
            }
    
            pos = flag + 1;
    
            while (pos < len && 0 == nums[pos]) {
                pos++;
            }
    
            if (pos >= len) {
                break;
            }
    
            nums[pos] ^= nums[flag];
            nums[flag] ^= nums[pos];
            nums[pos] ^= nums[flag];
    
            flag++;
        }
    }
};
