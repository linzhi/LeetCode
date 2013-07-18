/*
 * Author: linzhi, qilinzhi#gmail.com
 *
 * Title: 3Sum
 *
 */

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int> > result;
        
        sort(num.begin(), num.end());

        for (vector<int>::iterator i = num.begin(); i != num.end(); i++) {
            vector<int>::iterator j = i + 1;
            vector<int>::iterator k = num.end() - 1;
            
            while (j < k) {
                if (*i + *j + *k > 0)
                    k--;
                else if (*i + *j + *k < 0)
                    j++;
                else {
                    vector<int> triplet;

                    triplet.push_back(*i);
                    triplet.push_back(*j);
                    triplet.push_back(*k);

                    sort(triplet.begin(), triplet.end());

                    if (find(result.begin(), result.end(), triplet) == result.end())
                        result.push_back(triplet);
                    j++;
                    k--;
                }
            }
        }
        
        return result;
    }
};

