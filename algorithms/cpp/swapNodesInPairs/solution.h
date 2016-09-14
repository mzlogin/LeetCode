/**
 * Source : https://leetcode.com/problems/swap-nodes-in-pairs/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-09-15
 * */

/**
 * Problem:
 * Given a linked list, swap every two adjacent nodes and return its head.
 * 
 * For example,
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
 * 
 * Your algorithm should use only constant space. You may not modify the values
 * in the list, only nodes itself can be changed.
 */

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* ret = (head != NULL && head->next != NULL) ? head->next : head;

        ListNode* oldHead = NULL;
        while (head != NULL && head->next != NULL) {
            if (oldHead) {
                oldHead->next = head->next;
            }
            ListNode* tmp = head->next;
            head->next = tmp->next;
            tmp->next = head;
            oldHead = head;
            head = head->next;
        }

        return ret;
    }
};
