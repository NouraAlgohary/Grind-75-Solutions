class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mp;
        int maxVal = 0, majority = 0;

        for(int num : nums)
        {
            if (mp.count(num))
                mp[num] ++;
            else
                mp.insert({num, 1});
        }

        for(auto i : mp)
        {
            if(i.second > maxVal)
                {
                    maxVal = i.second;
                    majority = i.first;
                }
        }

        return majority;
    }
};