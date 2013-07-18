/*
 * Author: linzhi
 *
 * Title: Letter Combinations Of a Phone Number
 *
 * Hint: no need to consider 0 and 1
 *
 */

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        const string dict[] = {"abc", "def", "ghi", "jkl", "mno", "qprs", "tuv", "wxyz"};
        vector<string> result(1, "");

        for (string::iterator i = digits.begin(); i != digits.end(); i++) {
            const string str = dict[*i - '2']; 

            vector<string> tmp;
            for (string::const_iterator j = str.begin(); j != str.end(); j++) {
                for (vector<string>::iterator k = result.begin(); k != result.end(); k++) {
                    tmp.push_back(*k + *j);
                }
            }
            result = tmp;
        }
        return result;
    }
};

