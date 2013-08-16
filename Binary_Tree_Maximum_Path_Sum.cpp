/*
 * Author: linzhi
 *
 * Title: Binary Tree Maximum Path Sum
 *
 */

class Solution {
public:
    int maxPathSum(TreeNode *root) {
        int max_sum = INT_MIN;
        int tmp_sum;

        max_path_sum(root, tmp_sum, max_sum);

        return max_sum;
    }

    void max_path_sum(TreeNode *node, int &tmp_sum, int &max_sum) {
        if (node == NULL) {
            tmp_sum = 0; 
            return ;
        }

        int left_sum = 0;
        int right_sum = 0;

        max_path_sum(node->left, left_sum, max_sum);
        max_path_sum(node->right, right_sum, max_sum);
        tmp_sum = max(node->val, max(node->val + left_sum, node->val + right_sum));
        max_sum = max(max_sum, max(tmp_sum, node->val + left_sum + right_sum));
    }
};



