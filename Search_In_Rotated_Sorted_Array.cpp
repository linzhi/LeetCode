/*
 * Author: linzhi
 *
 * Title: Search In Rotated Sorted Array
 *
 */

class Solution {
public:
    int search(int A[], int n, int target) {
        int p = 0;    
        int q = n - 1;

        while (p <= q) {
            int mid = p + (q - p) / 2;

            if (A[mid] == target) return mid;
            else if (A[mid] >= A[p]) {
                if (A[p] <= target && A[mid] > target) 
                    q = mid - 1;
                else
                    p = mid + 1;
            }
            else if (A[mid] <= A[q]) {
                if (A[q] >= target && A[mid] < target) 
                    p = mid + 1;
                else
                    q = mid - 1;
            }
        }

        return -1;
    }
};

