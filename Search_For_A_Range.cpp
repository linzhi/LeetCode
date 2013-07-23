/*
 * Author: linzhi
 *
 * Title: Search for a Range
 *
 */

class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> result(2, -1);
        int p = 0; 
        int q = n - 1;

        while (p <= q) {
            int mid = p + (q - p) / 2;
            
            if (A[mid] == target) {
                int a = mid;
                int b = mid;
                while (a < n && A[a] == target)
                    a--; 

                while (b < n && A[b] == target)
                    b++; 

                result.at(0) = a + 1;
                result.at(1) = b - 1;

                return result;;
            }
            else if (A[mid] > target)
                q = mid - 1;
            else
                p = mid + 1;
        }

        return result;
    }
};

