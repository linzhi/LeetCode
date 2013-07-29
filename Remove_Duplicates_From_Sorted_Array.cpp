/*
 * Author: linzhi
 *
 * Title: Remove Duplicates From Sorted Array
 *
 */

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n < 2) return n;

        int p = 0;
        for (int q = 0; q < n; q++) {
            if (A[p] != A[q]) 
                A[++p] = A[q];
        }

        return p + 1;
    }
};
