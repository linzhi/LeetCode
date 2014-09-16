/*
 * Author: linzhi
 *
 * Title: Remove Element
 *
 */

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int i = 0;
        int j = 0;

        for ( ; i < n; i++) {
            if (A[i] != elem) {
                A[j] = A[i];
                j++;
            }
        }

        return j;
    }
};
