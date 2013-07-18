/*
 * Author: linzhi
 *
 * Title: Remove Nth Node From End Of List
 *
 */

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        assert(head);
        ListNode *p = head;  
        ListNode *q = head;  

        int i = 0;
        while (i < n && p != NULL) {
            p = p->next;
            i++;
        }

        if (i == n && p == NULL) {
            head = head->next; 
            delete q;
            return head;
        }

        while (p->next != NULL) {
            p = p->next; 
            q = q->next; 
        }

        ListNode *tmp = q->next;
        q->next = tmp->next;
        delete tmp;

        return head;
    }
};
