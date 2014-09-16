/*
 * Author: linzhi, qilinzhi#gmail.com
 *
 * Title: Longest Substring Without Repeating Characters
 *
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque<char> result;
        int max_len = 0;
        
        for (string::iterator i = s.begin(); i != s.end(); ++i) {
            if (find(result.begin(), result.end(), *i) == result.end()) {
                result.push_back(*i);
            }
            else {
                while (result.front() != *i) {
                    result.pop_front();
                }
                result.pop_front();
                result.push_back(*i);
            }
            max_len = result.size() > max_len ? result.size() : max_len;
        }
        
        return max_len;
    }
};
