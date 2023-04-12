class Solution {
public:
    string addBinary(string a, string b) {
        string  res = "";
        int sum = 0, remain = 0;
        if(a.size()<b.size()) swap(a,b);
        
        for(int i = 0;i<a.size();i++)
        {
            if(i<b.size()) 
            {
                sum = b[b.size()-i-1] - '0' + a[a.size()-i-1] - '0' + remain;
                remain = 0;
                if(sum == 0) res = '0' + res;
                else if(sum ==1) res = '1' +res;
                else 
                {
                    if(sum == 2) res = '0' +res;
                    else res = '1'+res;                    
                    remain = 1;
                 }
            }else if (remain)
            {
                if(a[a.size()-i-1] == '0') {res = '1' + res; remain = 0;}
                else {res = '0' + res; remain = 1;}
            }
            else
                res = a[a.size()-i-1] +res;
        }
        if(remain) res = '1' +res;
        return res;
    }
};