class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string maxPrefix = "", first = strs[0], last = strs[strs.size() - 1];
        int n = first.size();
        
        if(last.size()<n)
            n = last.size();

        for(int i = 0;i<n;i++){
            if(first[i] != last[i])
                return maxPrefix;
            
            maxPrefix += first[i];
        }

        return maxPrefix;
    }
};