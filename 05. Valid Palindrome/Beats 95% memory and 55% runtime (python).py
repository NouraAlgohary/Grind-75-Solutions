class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1

        s = s.lower()

        while left < right:
            while left < right and (s[left] < 'a' or s[left] > 'z') and (s[left] < '0' or s[left] > '9'):
                left += 1
            while left < right and (s[right] < 'a' or s[right] > 'z') and (s[right] < '0' or s[right] > '9'):
                right -= 1
            
            if s[left] != s[right]:
                return False

            left += 1
            right -= 1

        return True