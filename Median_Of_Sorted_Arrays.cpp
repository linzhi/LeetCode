/*
 * Author: linzhi
 *
 * Title: Median of two Sorted Arrays
 *
 */

class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        if ((m + n) % 2 == 0)
            return (find_kth(A, m, B, n, (m + n) / 2) + 
                    find_kth(A, m, B, n, (m + n) / 2 + 1)) / 2.0;
        else
            return find_kth(A, m, B, n, (m + n) / 2 + 1);
    }

private:
    static int find_kth(int A[], int m, int B[], int n, int k) {
        if (m > n) 
            return find_kth(B, n, A, m, k);
        if (m == 0)
            return B[k - 1];
        if (k == 1)
            return min(A[0], B[0]);

        int p = min(k / 2, m);
        int q = k - p;

        if (A[p - 1] < B[q - 1])
            return find_kth(A + p, m - p, B, n, k - p);
        else if (A[p - 1] > B[q - 1])
            return find_kth(A, m, B + q, n - q, k - q);
        else
            return A[p - 1];
    }
};



