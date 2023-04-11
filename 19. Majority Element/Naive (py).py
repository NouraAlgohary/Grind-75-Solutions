class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = {}
        maxVal = 0
        majority = 0

        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        
        for n, f in freq.items():
            if f > maxVal:
                maxVal = f
                majority = n

        return majority