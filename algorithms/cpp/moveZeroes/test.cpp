#include "../catch.h"
#include <vector>
using namespace std;
#include "solution.h"

vector<int> createVector(int* nums, int len) {
    vector<int> vec;
    for (int i = 0; i < len; i++) {
        vec.push_back(nums[i]);
    }
    return vec;
}

bool arrayEqualsVector(int* nums, int len, vector<int>& vec) {
    if (len != vec.size()) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (i >= vec.size() || nums[i] != vec[i]) {
            return false;
        }
    }
    return true;
}

TEST_CASE("Move Zeroes", "moveZeroes") {
    Solution sln;

    const int len = 5;
    int nums1[len] = {0,1,0,3,12};
    vector<int> vec = createVector(nums1, len);
    sln.moveZeroes(vec);

    int nums2[len] = {1,3,12,0,0};
    CHECK(arrayEqualsVector(nums2, len, vec));

    const int len2 = 10;
    int nums3[len2] = {0,1,0,5,0,3,0,10,0,2};
    vector<int> vec2 = createVector(nums3, len2);
    sln.moveZeroes(vec2);
    int nums4[len2] = {1,5,3,10,2,0,0,0,0,0};
    CHECK(arrayEqualsVector(nums4, len2, vec2));
}
