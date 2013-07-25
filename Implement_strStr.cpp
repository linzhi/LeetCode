/*
 * Author: linzhi
 *
 * Title: Implement strStr()
 *
 */

class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        int i = 0; 
        int j = 0; 

        while (haystack[i + j] != '\0' && needle[j] != '\0') {
            if (haystack[i + j] == needle[j]) 
                j++;
            else {
                i++;
                j = 0;
            }
        }

        if (needle[j] == '\0')
            return haystack + i;
        else
            return NULL;
    }
};
