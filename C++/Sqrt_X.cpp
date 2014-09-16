/*
 * Author: linzhi
 *
 * Title: Sqrt(x)
 *
 */

class Solution {
public:
    int sqrt(int x) {
        double x_i = 0;
        double x_j = 1;

        if (x == 0) return 0;

        while (x_j != x_i) {
            x_i = x_j;
            x_j = (x_j + x / x_j) / 2;
        }

        return int(x_j);
    }
};
