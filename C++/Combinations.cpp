/*
 * Author: linzhi copy from internet
 *
 * Title: Combinations
 *
 */

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > result, tmp(1);

        if (n < k || n <= 0 || k <= 0) return result;

        for (int i = 1; i <= n; i++) {
            for (int j = tmp.size() - 1; j >= 0; j--) {
                if (tmp[j].size() == k - 1) {
                    result.push_back(tmp[j]); 
                    result.back().push_back(i);
                } else {
                    tmp.push_back(tmp[j]);
                    tmp.back().push_back(i);
                }
            }
        }

        return result;
    }
};
