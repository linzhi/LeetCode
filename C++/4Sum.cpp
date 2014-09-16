/*
 * Author: linzhi, qilinzhi#gmail.com
 *
 * Title: 4Sum
 *
 */

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> > result;

        sort(num.begin(), num.end());

        if (num.size() < 4)
            return result;

        for (vector<int>::iterator i = num.begin(); i < num.end() - 3; i++) {
            for (vector<int>::iterator j = i + 1; j < num.end() - 2; j++) {
                vector<int>::iterator k = j + 1;
                vector<int>::iterator l = num.end() - 1;

                while (k < l) {
                    if (*i + *j + *k + *l < target) 
                        k++;
                    else if (*i + *j + *k + *l > target)
                        l--;
                    else if (*i + *j + *k + *l == target) {
                        vector<int> quadruplet;

                        quadruplet.push_back(*i);
                        quadruplet.push_back(*j);
                        quadruplet.push_back(*k);
                        quadruplet.push_back(*l);

                        sort(quadruplet.begin(), quadruplet.end());

                        if (find(result.begin(), result.end(), quadruplet) == result.end())
                            result.push_back(quadruplet);
                        k++;
                        l--;
                    }
                }
            }
        }

        return result;
    }
};

