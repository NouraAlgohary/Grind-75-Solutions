class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=3 :
            return n
        
        a, b = 3, 2

        for i in range(n - 3):
            a += b
            b = a - b
        
        return a