/*
 * Author: linzhi
 *
 * Title: Add Two Numbers
 *
 */

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode(0); 
        ListNode *p = head;
        int carry = 0;

        while (l1 != NULL || l2 != NULL) {
            int v1 = (l1 ? l1->val : 0);
            int v2 = (l2 ? l2->val : 0);

            int sum = v1 + v2 + carry;
            if (sum > 9)
                carry = 1;
            else
                carry = 0;
            sum = sum % 10;

            ListNode *node = new ListNode(sum);
            p->next = node;
            p = p->next;

            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }

        if (carry == 1)
            p->next = new ListNode(1);

        p = head->next;
        delete head;

        return p;
    }
};
