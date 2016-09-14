#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

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

void printList(ListNode* list) {
    if (list != NULL) {
        ListNode* p = list;
        while (p) {
            printf("%d ", p->val);
            p = p->next;
        }
        printf("\n");
    }
}
