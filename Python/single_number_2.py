#!/usr/bin/env python2

class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        if len(A) == 1:
            return A[0]

        bit = [0] * 32

        for i in range(0, 32):
            for j in range(0, len(A)):
                bit[i] += (A[j] >> i) & 1

        res = 0
        if bit[31] % 3 == 0:
            for i in range(0, 32):
                if bit[i] % 3 == 1: res += 1 << i
        else:
            for i in range(0, 32):
                if bit[i] % 3 == 0: res += 1 << i
            res = -(res + 1)

        return res


if __name__ == "__main__":
    demo = Solution()
    print demo.singleNumber([-2,-2,1,1,-3,1,-3,-3,-4,-2])

