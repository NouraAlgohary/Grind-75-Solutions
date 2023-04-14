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
int maxPath = 0;
int longestPath(TreeNode* node)
{
    if(!node)
        return 0;

    int left = longestPath(node->left);
    int right = longestPath(node->right);

    if(left + right > maxPath)
        maxPath = left + right;

    if(left > right)
        return ++left;
    else 
        return ++right;
}
    int diameterOfBinaryTree(TreeNode* root) {
        longestPath(root);
        return maxPath;
    }
};