# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        tempNode = head
        prevNode = None

        while tempNode:
            nextNode = tempNode.next
            tempNode.next = prevNode
            prevNode = tempNode
            tempNode = nextNode

        return prevNode