/*
 * Author: linzhi
 *
 * Title: Generate Parentheses
 *
 */

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        //represent the number of '('
        int l = 0;

        //represent the number of ')'
        int r = 0;

        string str;
        vector<string> vec;

        combinationStr(vec, str, n, l, r);

        return vec;
    }

    void combinationStr(vector<string> &vec, string str, int n, int l, int r) {
        if (l == n && r == n) {
            vec.push_back(str);
            return ;
        }

        if (l < n)
            combinationStr(vec, str+'(', n, l+1, r);
        if (r < l)
            combinationStr(vec, str+')', n, l, r+1);
    }
};
