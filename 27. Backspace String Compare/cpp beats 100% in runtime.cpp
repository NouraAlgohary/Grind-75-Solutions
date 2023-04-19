class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_after = "", t_after = "";
        int backspace = 0;

        for(int i = s.size() - 1; i>=0; i--)
        {
            if(s[i] == '#')
            {
                backspace ++;
            }else if(backspace)
            {
                backspace--;
            }else
            {
                s_after = s[i] + s_after;
            }
        }
       
       backspace = 0;

       for(int i = t.size() - 1; i>=0; i--)
        {
            if(t[i] == '#')
            {
                backspace ++;
            }else if(backspace)
            {
                backspace--;
            }else
            {
                t_after = t[i] + t_after;
            }
        }

        if (s_after == t_after)
        return true;
        return false;
    }
};