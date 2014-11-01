#!/usr/bin/env python2

class Solution:
    # @param A, a list of integers
    # @return an integer
    def max_product(self, A):
        if len(A) <= 0:
            return 0
        elif len(A) == 1:
            return A[0]

        cur_max = A[0]
        cur_min = A[0]
        result = A[0]

        for i in range(1, len(A)):
            temp = cur_max
            cur_max = max(max(cur_max * A[i], A[i]), cur_min * A[i])
            cur_min = min(min(temp * A[i], A[i]), cur_min * A[i])

            result = max(result, cur_max)

        return result



