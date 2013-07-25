/*
 * Author: linzhi
 *
 * Title: Longest Valid Parentheses
 *
 */

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> tmp;
        int max_len = 0;
        int p = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                tmp.push(i);
            }
            else {
                if (!tmp.empty()) {
                    tmp.pop();
                
                    if (!tmp.empty())
                        max_len = max(max_len, i - tmp.top());
                    else
                        max_len = max(max_len, i - p + 1);
                }
                else
                    p = i + 1;
            }
        }

        return max_len;
    }
};

