class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int num : nums)
        {
            st.insert(num);
        }

        if (st.size() == nums.size())
        return false ;
        return true;
    }
};