# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    maxPath = 0
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:

        def longestPath(node):
            if not node:
                return 0
            
            left = longestPath(node.left)
            right = longestPath(node.right)

            # print("left: ", left, " right: ", right)

            if left + right > self.maxPath:
                self.maxPath = left + right

            return (1 + left) if left > right else (1 + right)

        longestPath(root)

        return self.maxPath