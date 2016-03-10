#include "../catch.h"
#include "solution.h"

ListNode* createList(int* nums, int len) {
    ListNode* head = NULL;
    ListNode* tail = NULL;

    for (int i = 0; i < len; i++) {
        if (head == NULL) {
            head = new ListNode(nums[i]);
            tail = head;
        } else {
            tail->next = new ListNode(nums[i]);
            tail = tail->next;
        }
    }

    return head;
}

bool arrayEqualsList(int* nums, int len, ListNode* list) {
    for (int i = 0; i < len; i++) {
        if (list == NULL || list->val != nums[i]) {
            return false;
        }
        list = list->next;
    }

    return true;
}

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
