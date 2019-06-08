#include "../catch.h"
#include "../myvectorutil.h"
#include <vector>
#include <map>
using namespace std;
#include "solution.h"

TEST_CASE("Two Sum") {
    Solution sln;

    const int len = 4;
    int data[len] = {2, 7, 11, 15};

    vector<int> nums = createVector(data, len);
    int target = 9;

    const int resultLen = 2;
    int result[resultLen] = {0, 1};

    CHECK(arrayEqualsVector(result, resultLen, sln.twoSum(nums, 9)));
}
