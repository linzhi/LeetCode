/*
 * Author: linzhi
 *
 * Title: Remove Duplicates From Sorted Array II
 *
 */

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n == 0) return 0;

        int cur = 1;
        bool state = true;

        for (int i = 1; i < n; i++) {
            if (A[i] != A[cur - 1]) {
                A[cur++] = A[i];
                state = true;
            }
            else if (state == true) {
                A[cur++] = A[i];
                state = false; 
            }
        }

        return cur;
    }
};
