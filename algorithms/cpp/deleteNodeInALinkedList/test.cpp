#include "../catch.h"
#include "../mylist.h"
#include "solution.h"

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
