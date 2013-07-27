/*
 * Author: linzhi
 *
 * Title: Jump Game
 *
 */

class Solution {
public:
    bool canJump(int A[], int n) {
        vector<bool> cur(n - 1, false);
        cur[0] = true;

        for (int i = 0, j = 0; i < n; i++) {
            if (cur[i] == true || i <= j) {
                j = max(j, A[i] + i);
                if (j >= n - 1)
                    return true;
            }
        }

        return false;
    }
};
