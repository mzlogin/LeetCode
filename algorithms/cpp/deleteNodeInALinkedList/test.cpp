#include "../catch.h"
#include "solution.h"

ListNode* createList(int* nums, int len) {
    ListNode* root = NULL;
    ListNode* p = root;

    for (int i = 0; i < 4; i++) {
        ListNode* node = new ListNode(nums[i]);

        if (root == NULL) {
            root = node;
            p = node;
        } else {
            p->next = node;
            p = p->next;
        }
    }

    return root;
}

int getListValueAt(ListNode* root, int pos) {
    for (int i = 0; i < pos; i++) {
        root = root->next;
    }

    return root->val;
}

TEST_CASE("Delete Node In a Linked List", "deleteNodeInALinkedList") {
    Solution sln;
    const int len = 4;
    int nums[len] = {1,2,3,4};
    ListNode* root = createList(nums, len);

    ListNode* p = root->next->next;
    sln.deleteNode(p);
    CHECK(getListValueAt(root, 2) == 4);
    p = root->next;
    sln.deleteNode(p);
    CHECK(getListValueAt(root, 1) == 4);
}
