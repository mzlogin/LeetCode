/**
 * Source : https://leetcode.com/problems/odd-even-linked-list/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-03-10
 * */

/**
 * Problem:
 * Given a singly linked list, group all odd nodes together followed by the
 * even nodes. Please note here we are talking about the node number and not
 * the value in the nodes.
 *
 * You should try to do it in place. The program should run in O(1) space
 * complexity and O(nodes) time complexity.
 *
 * Example:
 * Given 1->2->3->4->5->NULL,
 * return 1->3->5->2->4->NULL.
 *
 * Note:
 * The relative order inside both the even and odd groups should remain as it
 * was in the input. 
 * The first node is considered odd, the second node even and so on ...
 */

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddTail = head;
        ListNode* evenHead = NULL;
        ListNode* evenTail = NULL;

        while (oddTail != NULL && oddTail->next != NULL) {
            if (evenHead == NULL) {
                evenHead = oddTail->next;
                evenTail = evenHead;
            }

            oddTail->next = evenTail->next;
            if (evenTail->next != NULL) {
                oddTail = evenTail->next;
            }

            evenTail->next = oddTail->next;
            evenTail = oddTail->next;
        }

        if (oddTail != NULL) {
            oddTail->next = evenHead;
        }

        return head;
    }
};
