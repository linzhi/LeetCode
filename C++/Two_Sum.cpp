/*
 * Author: linzhi qilinzhi#gmail.com
 *
 * Title: Two Sum
 *
 */

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result;

        for (vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++) {
            vector<int>::iterator it = find(i + 1, numbers.end(), target - *i);

            if (it != numbers.end()) {
                for (vector<int>::size_type j = 0; j < numbers.size(); j++) {
                    if (numbers.at(j) == *it) {
                        result.push_back(j + 1);
                    }
                    else if (numbers.at(j) == (target - *it)) {
                        result.push_back(j + 1);
                    }
                }
                break;
            }
        }

        return result;
    }
};




