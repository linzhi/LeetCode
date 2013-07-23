/*
 * Author: linzhi
 *
 * Title: Search In Rotated Sorted Array II
 *
 */

class Solution {
public:
    bool search(int A[], int n, int target) {
        int p = 0;    
        int q = n - 1;

        while (p <= q) {
            int mid = p + (q - p) / 2;

            if (A[mid] == target)
                return true;
            else if (A[mid] > A[p]) {
                if (A[p] <= target && A[mid] > target) 
                    q = mid - 1;
                else
                    p = mid + 1;
            }
            else if (A[mid] < A[p]) {
                if (A[q] >= target && A[mid] < target) 
                    p = mid + 1;
                else
                    q = mid - 1;
            }
            else {
                if (A[mid] == target)
                    return true;
                while (A[p] == A[mid])
                    p++; 
            }
        }

        return false;
    }
};

