/*
 * Author: linzhi
 *
 * Title: Plus One
 *
 */

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int count_nine = 0;
        vector<int> result(digits);

        for (vector<int>::reverse_iterator i = result.rbegin(); i != result.rend(); i++) {
            if (*i != 9) {
                *i += 1;
                break;
            }
            else if (*i == 9) {
                *i = 0; 
                count_nine++;
            }
        }

        if (count_nine == result.size())
            result.insert(result.begin(), 1);

        return result;
    }
};
