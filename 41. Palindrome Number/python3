class Solution:
    def isPalindrome(self, originalX: int) -> bool:
        newX = 0
        x = originalX

        while(x != 0):
            digit = int(x % 10)
            x = int(x / 10)

            newX = (newX + digit)

            if x != 0:
                newX = newX * 10

        if int(newX) == originalX:
            return True
        else:
            return False
