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

        ListNode *p = head;
        ListNode *q = head->next;
      
        while (q != NULL && p != NULL) {
            if (p->val != q->val) {
                p->next = q; 
                p = q;
                q = q->next;
            }
            else {
                q = q->next; 
                p->next = q;
            }
        }

        return head;
    }
};
