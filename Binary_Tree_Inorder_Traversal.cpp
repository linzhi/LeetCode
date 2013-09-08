/*
 * Author: linzhi
 *
 * Title: Binary Tree Inorder Traversal
 *
 */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;

        if (root == NULL)
            return result;

        inorder(root, result);
    }

private:
    void inorder(TreeNode *root, vector<int> &result) {
        if (root == NULL) 
            return ;

        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
    }
};
