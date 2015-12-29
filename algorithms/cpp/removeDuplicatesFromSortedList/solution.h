/**
 * Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-12-13
 * */

/**
 * Problem:
 * Given a sorted linked list, delete all duplicates such that each element
 * appear only once.
 * 
 * For example,
 * Given 1->1->2, return 1->2.
 * Given 1->1->2->3->3, return 1->2->3.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* pThis = head;
        ListNode* pNext = pThis->next;
        while (pThis != NULL && pNext != NULL) {
            if (pThis->val == pNext->val) {
                pThis->next = pNext->next;
                delete pNext;
                pNext = pThis->next;
            } else {
                pThis = pNext;
                pNext = pThis->next;
            }
        }
        return head;
    }
};
