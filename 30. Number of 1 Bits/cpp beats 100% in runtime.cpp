class Solution {
public:
    int hammingWeight(uint32_t n) {
        int no = 0;
        
       while(n)
       {
           n = n & (n-1);
           no++;
       }

        return no;
    }
};