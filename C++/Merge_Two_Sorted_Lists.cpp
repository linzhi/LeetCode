/*
 * Author: linzhi
 *
 * Title: Merge Two Sorted Lists
 *
 */

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode(0); 
        ListNode *p = head;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                p->next = l1; 
                p = l1;
                l1 = l1->next;
            }
            else {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }

        while (l1 != NULL) {
            p->next = l1; 
            p = l1;
            l1 = l1->next;
        }

        while (l2 != NULL) {
            p->next = l2; 
            p = l2;
            l2 = l2->next;
        }

        return head->next;
    }
};
