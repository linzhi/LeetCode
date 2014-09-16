/*
 * Author: linzhi
 *
 * Title: Binary Tree Level Order Traversal
 *
 */

class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > result;
        if (root == NULL)
            return result;

        queue<TreeNode*> help_queue;
        help_queue.push(root);

        while (!help_queue.empty()) {
            vector<int> level_val;
            queue<TreeNode*> tmp_queue;

            while (!help_queue.empty()) {
                TreeNode *p = help_queue.front();
                help_queue.pop();
                level_val.push_back(p->val);    

                if (p->left != NULL)
                    tmp_queue.push(p->left);
                if (p->right != NULL)
                    tmp_queue.push(p->right);
            }

            result.push_back(level_val);
            help_queue = tmp_queue;
        }

        return result;
    }
};





