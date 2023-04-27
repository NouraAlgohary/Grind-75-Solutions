class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        for(int i = n - 1;i >= 0; i--)
        {
            if (nums[i] == 0)
                {
                    nums.push_back(0);
                    nums.erase(nums.begin()+i);
                }
        }
            
    }
};