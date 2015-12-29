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

TEST_CASE("Merge Two Sorted Lists", "mergeTwoSortedLists") {
    Solution sln;

    const int len1 = 5;
    int nums1[len1] = {1,3,8,11,12};
    ListNode* list1 = createList(nums1, len1);

    const int len2 = 6;
    int nums2[len2] = {1,2,7,8,12,15};
    ListNode* list2 = createList(nums2, len2);

    const int len3 = len1 + len2;
    int mergeNums[len3] = {1,1,2,3,7,8,8,11,12,12,15};

    CHECK(arrayEqualsList(mergeNums, len3, sln.mergeTwoLists(list1, list2)));
}
