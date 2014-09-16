/*
 * Author: linzhi
 *
 * Title: Swap Nodes In Pairs
 *
 */

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *p = head; 
        ListNode *q = p->next; 

        p->next = q->next;
        q->next = p;
        head = q;

        while (p->next != NULL && p->next->next != NULL) {
            q = p->next->next;
            p->next->next = q->next;
            q->next = p->next;
            p->next = q;
            p = q->next;
        }

        return head;
    }
};
