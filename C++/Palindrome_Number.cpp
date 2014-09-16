/*
 * Author: linzhi, qilinzhi@gmail.com
 *
 * Title: Palindrome Number
 *
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x == 0)
            return true;

        ostringstream convert;
        convert << x;
        string x_str = convert.str();

        string::iterator l = x_str.begin();
        string::iterator r = x_str.end() - 1;

        while (l < r) {
            if (*l != *r)
                return false;

            l++;
            r--;
        }

        return true;
    }
};
