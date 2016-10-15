#include "../catch.h"
#include "../mylist.h"
#include "solution.h"

TEST_CASE("Reverse Linked List", "reverseLinkedList") {
    Solution sln;

    const int len = 5;
    int nums[len] = {1,2,3,4,5};
    ListNode* root = createList(nums, len);

    ListNode* reversed = sln.reverseList(root);

    int reversedNums[len] = {5,4,3,2,1};
    CHECK(arrayEqualsList(reversedNums, len, reversed));
}

TEST_CASE("Reverse Linked List Solution 2", "reverseLinkedList") {
    Solution sln;

    const int len = 5;
    int nums[len] = {1,2,3,4,5};
    ListNode* root = createList(nums, len);

    ListNode* reversed = sln.reverseList2(root);

    int reversedNums[len] = {5,4,3,2,1};
    CHECK(arrayEqualsList(reversedNums, len, reversed));
}
