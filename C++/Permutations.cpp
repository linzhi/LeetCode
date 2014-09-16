/*
 * Author: linzhi
 *
 * Title: Permutations
 *
 */

class Solution {
public:
    void perm(vector<int> &num, vector<vector<int> > &ret, int i) {
        if (i == num.size())
            ret.push_back(num);

        for (int j = i; j < num.size(); j++) {
            swap(num[i], num[j]);

            perm(num, ret, i + 1);

            swap(num[i], num[j]);
        }
    }

    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > ret;

        perm(num, ret, 0);

        return ret;
    }
};
