#include "../catch.h"
#include "solution.h"
//#include "solution2.h"

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

TEST_CASE("Reverse Linked List", "reverseLinkedList") {
    Solution sln;

    const int len = 5;
    int nums[len] = {1,2,3,4,5};
    ListNode* root = createList(nums, len);

    ListNode* reversed = sln.reverseList(root);

    int reversedNums[len] = {5,4,3,2,1};
    CHECK(arrayEqualsList(reversedNums, len, reversed));
}
