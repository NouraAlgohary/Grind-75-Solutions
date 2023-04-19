class Solution {
public:
    int romanToInt(string s) {
        int num = 0;

        for(int i = s.size(); i >= 0; i--)
        {
            if(s[i] == 'I')
            {
                num += 1;
            }
            else if(s[i] == 'V')
            { 
                num += 5;

                if(i >0 && s[i - 1] == 'I')
                    {
                        num -= 1;
                        i--;
                    }
            }
            else if(s[i] == 'X')
            {
                num += 10;

                if(i >0 && s[i - 1] == 'I')
                {
                    num -= 1;
                    i--;
                }
            }
            else if(s[i] == 'L')
            {
                num += 50;

                if(i >0 && s[i - 1] == 'X')
                {
                    num -= 10;
                    i--;
                }
            }
            else if(s[i] == 'C')
            {
                num += 100;

                if(i >0 && s[i - 1] == 'X')
                {
                    num -= 10;
                    i--;
                }
            }
            else if(s[i] == 'D')
            {
                num += 500;

                if(i >0 && s[i - 1] == 'C')
                {
                    num -= 100;
                    i--;
                }
            }
            else if(s[i] == 'M')
            {
                num += 1000;

                if(i >0 && s[i - 1] == 'C')
                {
                    num -= 100;
                    i--;
                }
            }
            }

        return num;
    }
};