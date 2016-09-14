#include "../catch.h"
#include "../mylist.h"
#include "solution.h"

TEST_CASE("Swap Nodes in Pairs", "swapNodesInPairs") {
    Solution sln;

    SECTION("Case 1") {
        const int len = 5;
        int nums[len] = {1,2,3,4,5};
        ListNode* node = createList(nums, len);
        node = sln.swapPairs(node);
        int swapedNums[len] = {2,1,4,3,5};
        CHECK(arrayEqualsList(swapedNums, len, node));
    }

    SECTION("Case 2") {
        const int len = 4;
        int nums[len] = {1,2,3,4};
        ListNode* node = createList(nums, len);
        node = sln.swapPairs(node);
        int swapedNums[len] = {2,1,4,3};
        CHECK(arrayEqualsList(swapedNums, len, node));
    }
}
