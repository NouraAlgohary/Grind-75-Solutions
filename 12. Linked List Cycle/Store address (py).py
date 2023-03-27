# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        add = []

        while head:
            if head.next in add:
                return True
            
            add.append(head.next)
            head = head.next

        return False