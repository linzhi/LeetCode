/*
 * Author: linzhi
 *
 * Title: Largest Rectangle in Histogram
 *
 */

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        int area = 0; 
        stack<int> ret;

        for (int i = 0; i < height.size(); i++) {
            if (ret.empty() || height[ret.top()] < height[i])
                ret.push(i); 
            else {
                int start = ret.top();
                ret.pop();
                int width = ret.empty() ? i : i - ret.top() - 1;
                area = max(area, height[start] * width);
                i--;
            }
        }

        while (!ret.empty()) {
            int start = ret.top();
            ret.pop();
            int width = ret.empty() ? height.size() : height.size() - ret.top() - 1;
            area = max(area, height[start] * width);
        }

        return area;
    }
};
