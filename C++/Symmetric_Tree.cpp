/*
 * Author: linzhi
 *
 * Title: Symmetric tree
 *
 */

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root == NULL) 
            return true;

        is_symmetric(root->left, root->right);
    }

private:
    bool is_symmetric(TreeNode *l, TreeNode *r) {
        if (l == NULL && r == NULL)
            return true;
        else if (l == NULL || r == NULL)
            return false;

        return is_symmetric(l->left, r->right) && 
               is_symmetric(l->right, r->left) &&
               l->val == r->val;
    }
};




