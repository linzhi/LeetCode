/*
 * Author: linzhi
 *
 * Title: Valid Parentheses
 *
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (string::iterator p = s.begin(); p != s.end(); p++) {
            if (*p == '(' || *p == '[' || *p == '{')
                brackets.push(*p); 
            else if (!brackets.empty() && (abs(*p - brackets.top()) == 1 || abs(*p - brackets.top()) == 2))
                brackets.pop();
            else 
                return false;
        }

        return brackets.size() == 0;
    }
};
