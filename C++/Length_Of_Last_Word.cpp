/*
 * Author: linzhi
 *
 * Title: Length of Last Word
 *
 */

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int i = 0;
        int j = 0;

        while (*s != '\0') {
            if (*s == ' ') 
                i = 0;
            else {
                i++; 
                j = i;
            }
            s++;
        }

        return j;
    }
};
