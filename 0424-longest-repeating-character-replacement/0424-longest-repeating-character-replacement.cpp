class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int characterReplacement(string s, int k) {
        int freq[26]; memset(freq,0,sizeof(freq));
        int l=0,r=0;
        int ans = 0,mx = 0;
        for(r=0;r<(int)s.size();r++)
        {
            freq[s[r]-'A']++;
            mx = max(mx,freq[s[r]-'A']);
            if((r-l+1)-mx>k)
            {
                freq[s[l]-'A']--;
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};