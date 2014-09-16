/*
 * Author: linzhi
 *
 * Title: String to Integer
 *
 */

class Solution {
public:
    int atoi(const char *str) {
        long long num = 0;
        int positive = 1;

        while (*str == ' ') 
            str++;

        if (*str == '+') {
            positive = 1;
            str++;
        } else if (*str == '-') {
            positive = -1; 
            str++;
        } else if (!isdigit(*str)) {
            return 0;
        }

        while (isdigit(*str)) {
            num = num * 10 + *str - '0'; 
            str++;
        }

        num = num * positive;

        if (num > INT_MAX) return INT_MAX; 
        else if (num < INT_MIN) return INT_MIN;
        else return num;
    }
};

