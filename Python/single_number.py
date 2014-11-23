#!/usr/bin/env python2

class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        if len(A) == 1:
            return A[0]

        result = A[0]
        for i in range(1, len(A)):
            result = result ^ A[i]

        return result
            
