class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()

        maxPrefix = ""
        first, last = strs[0], strs[-1]

        for i in range(min(len(first), len(last))):
            if first[i] != last[i]:
                return maxPrefix
            
            maxPrefix += first[i]

        return maxPrefix