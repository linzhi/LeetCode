/*
 * Author: linzhi
 *
 * Title: Maximum Subarray
 *
 */

class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max_sum = INT_MIN; 
        int sum;

        for (int i = 0; i < n; i++) {
            sum = 0; 
            for (int j = i; j < n; j++) {
                sum += A[j];
                if (sum > max_sum)
                    max_sum = sum;
            }
        }

        return max_sum;
    }
};
