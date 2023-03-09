class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        sums = [0 for i in range(26)]
        sumt = [0 for i in range(26)]

        for i in range(len(s)):
            sums[ord(s[i]) - 97] += 1
            sumt[ord(t[i]) - 97] += 1
            
        
        for i in range(26):
            if sums[i] != sumt[i]:
                return False
            
        return True