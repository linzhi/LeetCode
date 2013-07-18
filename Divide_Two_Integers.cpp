/*
 * Author: linzhi copy from internet
 *
 * Title: Divide Two Integers
 *
 */

class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long result = 0;

        while (a >= b) {
            int i = 1; 

            while (a >= b << i)
                i++;

            result |= 1 << i - 1;
            a -= b << i - 1;
        }

        return (dividend ^ divisor) >> 31 ? -result : result;
    }
};
