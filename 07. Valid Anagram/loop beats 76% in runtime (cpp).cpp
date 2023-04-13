class Solution {
public:
    bool isAnagram(string s, string t) {
        int sums [26] = {0}, sumt[26] = {0};
        if(s.size()!=t.size())
            return false;

        for(int i=0;i<s.size();i++)
        {
            sums[s[i] - 'a'] ++;
            sumt[t[i] - 'a'] ++;
        }

        for(int i=0;i<26;i++)
        {
            if(sums[i] != sumt[i])
                return false;
        }

        return true;
    }
};