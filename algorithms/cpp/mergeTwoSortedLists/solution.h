/**
 * Source : https://leetcode.com/problems/merge-two-sorted-lists/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-12-20
 * */

/**
 * Problem:
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* pResult = NULL;
        if (l1 == NULL) {
            pResult = l2;
        } else if (l2 == NULL) {
            pResult = l1;
        } else if (l1->val > l2->val) {
            pResult = l2;
            l2 = l2->next;
                            
            if (l2 == NULL) {
                pResult->next = l1;
            }
        } else {
            pResult = l1;
            l1 = l1->next;
            
            if (l1 == NULL) {
                pResult->next = l2;
            }
        }
        
        ListNode* pTail = pResult;
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val > l2->val) {
                pTail->next = l2;
                pTail = l2;
                l2 = l2->next;
                
                if (l2 == NULL) {
                    pTail->next = l1;
                }
            } else {
                pTail->next = l1;
                pTail = l1;
                l1 = l1->next;
                
                if (l1 == NULL) {
                    pTail->next = l2;
                }
            }
        }
        
        return pResult;
    }
};
