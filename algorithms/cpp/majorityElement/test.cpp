#include "../catch.h"
#include <vector>
using namespace std;

#include "solution.h"

TEST_CASE("Majority Element", "majorityElement") {
    Solution sln;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    CHECK(sln.majorityElement(nums) == 2);

    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);
    CHECK(sln.majorityElement(nums) == 2);

    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(3);
    CHECK(sln.majorityElement(nums) == 3);
}
