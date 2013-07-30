/*
 * Author: linzhi
 *
 * Title: Merge Intervals
 *
 */

class Solution {
public:
    static bool cmp(const Interval &a, const Interval &b) {
        return a.start < b.start; 
    }

    vector<Interval> merge(vector<Interval> &intervals) {
        if (intervals.empty() || intervals.size() == 1)
            return intervals;

        sort(intervals.begin(), intervals.end(), cmp);

        for (vector<Interval>::iterator it = intervals.begin() + 1; it != intervals.end();) {
            if ((*(it - 1)).end >= (*it).start) {
                (*(it - 1)).end = max((*(it - 1)).end, (*it).end);
                it = intervals.erase(it);
            }
            else
                it++;
        }

        return intervals;
    }
};
