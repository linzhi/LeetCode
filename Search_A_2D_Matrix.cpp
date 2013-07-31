/*
 * Author: linzhi
 *
 * Title: Search a 2D Matrix
 *
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int m = matrix.size(); 
        int n = (*matrix.begin()).size();
        int low = 0;
        int high = m - 1;
        int i = 0;

        while (low <= high) {
            i = low + (high - low) / 2;

            if (target == matrix[i][0])
                return true;
            else if (target < matrix[i][0])
                high = i - 1;
            else
                low = i + 1;
        }
        
        if (i > 0)
            i = low - 1;

        low = 0;
        high = n - 1;

        while (low <= high) {
            int j = low + (high - low ) / 2;

            if (target == matrix[i][j])
                return true;
            else if (target < matrix[i][j])
                high = j - 1;
            else
                low = j + 1;
        }

        return false;
    }
};
