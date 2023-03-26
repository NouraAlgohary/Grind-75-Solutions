/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode* node)
    {
        if(node == NULL)
            return 0;

        int left = depth(node->left);
        int right = depth(node->right);

        if(left == -1 || right == -1 || abs(left - right) > 1)
            return -1;
        
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        
        if(depth(root) == -1)
            return false;
        
        return true;
    }
};