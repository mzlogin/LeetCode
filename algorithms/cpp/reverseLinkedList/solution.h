/**
 * Source : https://leetcode.com/problems/reverse-linked-list/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-30
 * */

/**
 * Problem:
 * Reverse a singly linked list.
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
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
};
