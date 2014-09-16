/*
 * Author: linzhi
 *
 * Title: Remove Duplicates From Sorted List
 *
 */

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *p = new ListNode(0);
        p->next = head;
        head = p;
        ListNode *q = p->next;
      
        while (p->next != NULL) {
            while (q->next != NULL && q->next->val == q->val)
                q = q->next; 

            if (q != p->next)
                p->next = q->next;
            else
                p = p->next; 

            q = p->next;
        }

        return head->next;
    }
};




