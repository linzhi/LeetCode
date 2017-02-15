#!/usr/bin/env python2


class Solution(object):
    def twoSum(self, nums, target):
        if len(nums) < 2: return

        result = []
        for i in xrange(0, len(nums)):
            tmp_nums = nums[i + 1:]
            for j in xrange(0, len(tmp_nums)):
                if nums[i] + tmp_nums[j] == target:
                    result.append(i)
                    result.append(j + i + 1)
                    break
        
        return result

if __name__ == "__main__":
    demo = Solution()
    print demo.twoSum([3, 2, 4], 6)
