/*
 * Author: linzhi
 *
 * Title: Pow(x, n)
 *
 */

class Solution {
public:
    double pow(double x, int n) {
        if (n == 0) return 1;
        if (x == 0) return 0;

        if (n % 2 == 0) {
            double y = pow(x, n / 2);
            return y * y;
        } else if (n > 0) {
            double y = pow(x, n / 2); 
            return y * y * x;
        } else if (n < 0) {
            double y = pow(x, n / 2); 
            return y * y / x;
        }
    }
};
