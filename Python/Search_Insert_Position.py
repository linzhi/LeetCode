#!/usr/bin/env python2


class Solution(object):
    def searchInsert(self, nums, target):
        n = len(nums)
        if n == 0 or target <= nums[0]: return 0
        if target > nums[-1]: return n

        for i in xrange(0, n):
            p = nums[i]
            if i <  n - 1:
                q = nums[i + 1]
            else:
                break
            if target <= q and target > p:
                return i + 1


if __name__ == "__main__":
    demo = Solution()
    print demo.searchInsert([1], 1)
