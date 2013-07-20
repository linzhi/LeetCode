/*
 * Author: linzhi
 *
 * Title: Rotate List
 *
 */

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (head == NULL || k <= 0) return head;

        int len = 1;
        ListNode *p = head;
        ListNode *q = head;

        while (p->next != NULL) {
            p = p->next;
            len++;
        }

        k = k % len;
        p = head;

        while (k > 0 && p->next != NULL) {
            p = p->next; 
            k--;
        }

        while (p->next != NULL) {
            p = p->next; 
            q = q->next;
        }

        p->next = head;
        head = q->next;
        q->next = NULL;

        return head;
    }
};
