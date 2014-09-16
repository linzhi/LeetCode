/*
 * Author: linzhi
 *
 * Title: Rotate Image
 *
 */

class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        vector<vector<int> > tmp(matrix);
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = tmp[n - 1 - j][i];
            }
        }
    }
};
