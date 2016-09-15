#include "../catch.h"
#include "../myvectorutil.h"
#include "solution.h"

TEST_CASE("Single Number", "singleNumber") {
    Solution sln;
    const int len1 = 5;
    int nums1[len1] = {1,2,3,3,1};
    vector<int> nums = createVector(nums1, len1);
    CHECK(sln.singleNumber(nums) == 2);
}
