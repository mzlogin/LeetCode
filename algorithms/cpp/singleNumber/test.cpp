#include "../catch.h"
#include <vector>
using namespace std;
#include "solution.h"

vector<int> arrayToVector(int* nums, int len) {
    vector<int> vec;
    for (int i = 0; i < len; i++) {
        vec.push_back(nums[i]);
    }
    return vec;
}

TEST_CASE("Single Number", "singleNumber") {
    Solution sln;
    const int len1 = 5;
    int nums1[len1] = {1,2,3,3,1};
    vector<int> nums = arrayToVector(nums1, len1);
    CHECK(sln.singleNumber(nums) == 2);
}
