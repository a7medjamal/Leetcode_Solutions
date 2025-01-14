class Solution {
public:
    Solution() 
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int minimumLength(string s) {
        int freq[26]={0};
        for(char i:s) {
            ++freq[i-'a'];
        }
        int ans = (int)s.size();
        for(int i = 0;i < 26;++i) {
            while(freq[i]>=3) {
                freq[i]-=2;
                ans-=2;
            }
        }
        return ans;
    }
};