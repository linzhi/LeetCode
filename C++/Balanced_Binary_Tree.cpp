/*
 * Author: linzhi
 *
 * Title: Balanced Binary Tree
 *
 */

class Solution {
public:
    bool isBalanced(TreeNode *root) {
        try {
            max_depth(root);
        } catch (int) {
            return false;
        }

        return true;
    }

private:
    int max_depth(TreeNode *root) {
        if (root == NULL) 
            return 0;

        int l = max_depth(root->left);
        int r = max_depth(root->right);

        if (abs(l - r) > 1)
            throw 1;

        return max(l, r) + 1;
    }
};



