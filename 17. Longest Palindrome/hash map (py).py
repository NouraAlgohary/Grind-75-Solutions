class Solution:
    def longestPalindrome(self, s: str) -> int:
        freq = {}
        longest = 0

        for c in s:
            if c in freq:
                freq[c] += 1
            else:
                freq[c] = 1

        for c in freq:
            if freq[c] % 2 == 0:
                longest += freq[c]
            else:
                longest += freq[c] - 1
            
        return longest + 1 if (len(s) > longest) else longest