class Solution {
public:
    unsigned int hammingWeight(uint32_t n) 
    {
        unsigned int ans = 0;
        while(n>0)
        {
           if(n&1) ans++;
           n>>=1;
        }
        return ans;
    }
};