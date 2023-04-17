# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:

        def longestPath(node):
            if not node:
                return 0
            
            left = longestPath(node.left)
            right = longestPath(node.right)

            if left > right:
                return 1 + left
            else:
                return 1 + right

        return longestPath(root)