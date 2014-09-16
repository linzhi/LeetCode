/*
 * Author: linzhi
 *
 * Title: Valid Palindrome
 *
 * BTW: ".," is palindrome
 *
 */

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) return true;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int p = 0;
        int q = s.size() - 1;

        while (p < q) {
            while (p < q && !isalpha(s[p]) && !isdigit(s[p]))
                p++;
            while (p < q && !isalpha(s[q]) && !isdigit(s[q]))
                q--;

            if (s[p] == s[q]) {
                p++;
                q--;
            }
            else
                return false;
        }

        return true;
    }
};


