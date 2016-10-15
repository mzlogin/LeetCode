/**
 * Source : https://leetcode.com/problems/reverse-linked-list/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-30
 * */

/**
 * Problem:
 * Reverse a singly linked list.
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pPre = NULL;
        ListNode* pThis = head;
        ListNode* pNext = NULL;
        
        while (pThis != NULL) {
            pNext = pThis->next;
            pThis->next = pPre;
            
            pPre = pThis;
            pThis = pNext;
        }
        
        return pPre;
    }

    ListNode* reverseList2(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* childHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return childHead;
    }
};
