/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    int small, big;
    if(p->val < q->val)
    {
        small = p->val;
        big = q->val;
    }else
    {
        small = q->val;
        big = p->val;
    }
    while(root != NULL)
    {
        if(root->val < small)
            root = root->right;
        else if(root->val > big)
            root = root->left;
        else
            return root;
    }
    return root;
    }
};