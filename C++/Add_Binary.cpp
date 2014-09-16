/*
 * Author: linzhi
 *
 * Title: Add Binary
 *
 */

class Solution {
public:
    string addBinary(string a, string b) {
        string sum = "";
        int bit = 0;
        int a_len = a.size();    
        int b_len = b.size();    

        while (a_len > 0 || b_len > 0 || bit > 0) {
            int num = bit; 

            if (a_len > 0)
                num += a.at(a_len - 1) - '0';
            if (b_len > 0)
                num += b.at(b_len - 1) - '0';

            bit = num / 2;
            sum = string(1, '0' + (num & 1)) + sum;

            a_len--;
            b_len--;
        }

        return sum;
    }
};
