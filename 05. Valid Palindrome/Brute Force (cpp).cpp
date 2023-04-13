class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "", s2 = "";

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i = 0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                {
                    s1+=s[i];
                }
            if((s[s.size() - i - 1]>='a' && s[s.size() - i - 1] <= 'z') 
            || (s[s.size() - i - 1] >= '0' && s[s.size() - i - 1] <= '9'))
                {
                    s2+=s[s.size() - i - 1];
                }
        }
        
        if(s1 == s2)
            return true;

        return false;
    }
};