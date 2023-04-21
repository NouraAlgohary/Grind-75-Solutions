class Solution {
public:
    int bitsCounter(int n)
    {
        int cnt = 0;
        while(n>0)
        {
            if(n%2) cnt++;
            n/=2;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> bits;
        for(int i=0;i<=n;i++)
        {
            bits.push_back(bitsCounter(i));
        }

        return bits;
    }
};