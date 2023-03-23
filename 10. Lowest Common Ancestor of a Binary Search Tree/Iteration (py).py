# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if p.val < q.val:
            small = p.val
            big = q.val
        else:
            small = q.val
            big = p.val
        
        while root:
            if root.val < small:
                root = root.right
            elif root.val > big:
                root = root.left
            else:
                return root
            
        return root