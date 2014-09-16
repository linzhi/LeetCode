/*
 * Author: linzhi, qilinzhi#gmail.com
 *
 * Title: 3Sum Closest
 *
 */

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(), num.end()); 

        int res = num.at(0) + num.at(1) + num.at(2);

        for (vector<int>::iterator i = num.begin(); i < num.end() - 2; i++) {
            vector<int>::iterator j = i + 1;
            vector<int>::iterator k = num.end() - 1;

            while (j < k) {
                int sum = *i + *j + *k;

                if (abs(sum - target) < abs(res - target))
                    res = sum;

                if (sum == target)
                    return sum;
                else if (sum > target)
                    k--;
                else if (sum < target)
                    j++;
            }
        }

        return res;
    }
};


