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

TEST_CASE("Remove Dumplicates From Sorted List", "removeDumplicatesFrom Sorted List") {
    Solution sln;

    const int len1 = 5;
    int nums1[len1] = {1,1,2,3,3};
    ListNode* l1 = createList(nums1, len1);
    ListNode* r1 = sln.deleteDuplicates(l1);

    const int resLen1 = 3;
    int resNum1[resLen1] = {1,2,3};
    CHECK(arrayEqualsList(resNum1, resLen1, r1));
}
