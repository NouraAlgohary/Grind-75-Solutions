class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            try:
                j = nums.index((target - nums[i]), i + 1)
                return i, j
            except ValueError:
                continue
        