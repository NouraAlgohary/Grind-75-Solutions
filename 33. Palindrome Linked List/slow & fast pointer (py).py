# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        front, back = "", ""
        slow = head
        fast = head

        while fast and fast.next:
            front += str(slow.val)

            slow = slow.next
            fast = fast.next.next

        while slow:
            back = str(slow.val) + back
            
            slow = slow.next

        return True if front == back or front == back[:-1] else False