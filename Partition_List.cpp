/*
 * Author: linzhi
 *
 * Title: Partition List
 *
 */

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;

        ListNode *p = new ListNode(0);
        p->next = head;
        head = p;

        while (p != NULL) {
            while (p->next != NULL && p->next->val < x)
                p = p->next; 

            if (p->next == NULL)
                break;

            ListNode *q = p->next;
            while (q->next != NULL && q->next->val >= x)
                q = q->next;

            if (q->next == NULL)
                break;

            ListNode *r = q->next;
            while (r->next != NULL && r->next->val < x)
                r = r->next;

            ListNode *tmp = q->next;
            q->next = r->next;
            r->next = p->next;
            p->next = tmp;
        }

        return head->next;
    }
};
