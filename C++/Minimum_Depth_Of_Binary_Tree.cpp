/*
 * Author: linzhi
 *
 * Title: Minimum Depth of Binary Tree
 *
 */

class Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == NULL) 
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 1;

        int l = minDepth(root->left);
        int r = minDepth(root->right);

        if (l == 0)
            return r + 1;

        if (r == 0)
            return l + 1;

        return min(l, r) + 1;
    }
};
