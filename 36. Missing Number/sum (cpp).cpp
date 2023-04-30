class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;

        for(int num : nums)
            sum += num;

        return ((nums.size() * (nums.size()+1) / 2) - sum);
    }
};