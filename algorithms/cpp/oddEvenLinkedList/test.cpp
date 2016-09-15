#include "../catch.h"
#include "../mylist.h"
#include "solution.h"

TEST_CASE("Odd Even Linked List", "oddEvenLinkedList") {
    Solution sln;

    SECTION("Normal - odd") {
        const int len = 5;
        int nums[len] = {1,2,3,4,5};
        int oddEvenNums[len] = {1,3,5,2,4};
        ListNode* head = createList(nums, len);
        ListNode* oddEvenHead = sln.oddEvenList(head);
        CHECK(arrayEqualsList(oddEvenNums, len, oddEvenHead));
    }

    SECTION("Normal - even") {
        const int len = 6;
        int nums[len] = {1,2,3,4,5,6};
        int oddEvenNums[len] = {1,3,5,2,4,6};
        ListNode* head = createList(nums, len);
        ListNode* oddEvenHead = sln.oddEvenList(head);
        CHECK(arrayEqualsList(oddEvenNums, len, oddEvenHead));
    }

    SECTION("Boundary - one") {
        const int len = 1;
        int nums[len] = {1};
        int oddEvenNums[len] = {1};
        ListNode* head = createList(nums, len);
        ListNode* oddEvenHead = sln.oddEvenList(head);
        CHECK(arrayEqualsList(oddEvenNums, len, oddEvenHead));
    }

    SECTION("Boundary - zero") {
        ListNode* head = NULL;
        ListNode* oddEvenHead = sln.oddEvenList(head);
        CHECK(oddEvenHead == NULL);
    }
}
