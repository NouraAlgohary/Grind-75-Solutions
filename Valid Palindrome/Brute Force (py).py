class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 = s2 = ""

        s = s.lower()

        for i in range(len(s)):

            if (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= '0' and s[i] <= '9'):
                s1 += s[i]

            if (s[len(s) - i -1] >= 'a' and s[len(s) - i -1] <= 'z') or (s[len(s) - i -1] >=    '0' and s[len(s) - i - 1] <= '9'):
                s2 += s[len(s) - i -1]


        if s1 == s2:
            return True

        return False