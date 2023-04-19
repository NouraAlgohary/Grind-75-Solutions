class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int result = 0, end = s.size()-1;
        for(int i=end;i>=0;i--)
        {
            
            
            if(i!=end && s[i]=='I'&& s[i+1] !='I')
               {
                   result = result - mp[s[i]];
                   continue;
               }
            else if(i!=end &&s[i]=='X' &&(s[i+1]=='L' || s[i+1]=='C'))
            {
                result-=mp[s[i]];
            }
            else if(i!=end &&s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M'))
            {
                result-=mp[s[i]];
            }
            else
            {
                result += mp[s[i]];}
            
        }
        return result;
    }
};