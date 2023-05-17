class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        Sum = 0
        smax = -sys.maxsize - 1

        for num in nums:
            Sum += num
            smax = max(smax, Sum)

            if Sum < 0:
                Sum = 0
        
        return smax