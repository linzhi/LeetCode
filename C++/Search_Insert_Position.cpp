/*
 * Author: linzhi
 *
 * Title: Search Insert Position
 *
 */

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int i = 0;

        while (i < n) {
            if (A[i] < target) 
                i++;
            else
                return i;
        }

        return n;
    }
};
