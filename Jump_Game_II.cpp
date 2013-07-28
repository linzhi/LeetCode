/*
 * Author: linzhi
 *
 * Title: Jump Game II
 *
 */

class Solution {
public:
    int jump(int A[], int n) {
        int p = 0; // start of A
        int q = 0; // end of A
        int min_step = 0;
        int max_jump = 0;

        while (q < n - 1) {
            min_step++; 

            for (int i = p; i <= q; i++)
                max_jump = max(max_jump, A[i] + i);

            p = q + 1;
            q = max_jump;
        }

        return min_step;
    }
};



