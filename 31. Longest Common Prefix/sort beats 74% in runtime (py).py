class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()

        maxPrefix = ""
        first, last = strs[0], strs[-1]

        n = len(first) if len(first) < len(last) else len(last)

        for i in range(n):
            if first[i] != last[i]:
                return maxPrefix
            
            maxPrefix += first[i]

        return maxPrefix