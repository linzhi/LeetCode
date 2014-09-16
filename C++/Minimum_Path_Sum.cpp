/*
 * Author: linzhi
 *
 * Title: Minimum Path Sum
 *
 */

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int row = grid.size();
        int col = (*grid.begin()).size();
        vector<vector<int> > tmp(row, vector<int>(col, 0));

        for (int i = 0; i < row; i++) {
            for (int j = 0;j < col; j++) {
                if (i == 0 && j == 0)
                    tmp[i][j] = grid[i][j];
                else if (i == 0 && j != 0)
                    tmp[i][j] = tmp[i][j-1] + grid[i][j];
                else if (j == 0 && i != 0)
                    tmp[i][j] = tmp[i-1][j] + grid[i][j];
                else
                    tmp[i][j] = min(tmp[i-1][j], tmp[i][j-1]) + grid[i][j];
            }
        }

        return tmp[row-1][col-1];
    }
};
