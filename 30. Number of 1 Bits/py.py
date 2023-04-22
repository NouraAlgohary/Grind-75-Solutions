class Solution:
    def hammingWeight(self, n: int) -> int:
        no = 0

        while n:
            n = n & (n-1)

            no += 1
        
        return no