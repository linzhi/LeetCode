#!/usr/bin/env python

class Solution:
    # @param root, a tree node
    # @param sum, an integer
    # @return a boolean
    def hasPathSum(self, root, sum):
        if not root:
            return False
        elif not root.left and not root.right and root.val == sum:
            return True

        if self.hasPathSum(root.left, sum - root.val):
            return True
        elif self.hasPathSum(root.right, sum - root.val):
            return True
        else:
            return False

