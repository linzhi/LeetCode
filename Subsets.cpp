/*
 * Author: linzhi, qilinzhi#gmail.com
 *
 * Title: Subsets
 *
 */

class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int> > result;
        int len = S.size();

        for (int i = 0; i < (1 << len); i++) {
            vector<int> tmp;
    
            for (vector<int>::size_type j = 0; j < len; j++) {
                if ((i >> (len - j - 1)) & 1) {
                    tmp.push_back(S[j]);
                }
            }

            sort(tmp.begin(), tmp.end());
            result.push_back(tmp);
        }

        return result;
    }
};

