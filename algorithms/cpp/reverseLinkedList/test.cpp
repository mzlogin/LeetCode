#include "../catch.h"
#include "solution.h"
//#include "solution2.h"

TEST_CASE("Reverse Linked List", "reverseLinkedList") {
    Solution sln;

    const int len = 5;
    int nums[len] = {1,2,3,4,5};
    ListNode* root = createList(nums, len);

    ListNode* reversed = sln.reverseList(root);

    int reversedNums[len] = {5,4,3,2,1};
    CHECK(arrayEqualsList(reversedNums, len, reversed));
}
