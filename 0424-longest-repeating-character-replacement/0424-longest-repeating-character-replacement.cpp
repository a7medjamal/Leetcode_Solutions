class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0,r=0;
        int ans = 0,mx = 0;
        for(r=0;r<(int)s.size();r++)
        {
            mp[s[r]]++;
            mx = max(mx,mp[s[r]]);
            if((r-l+1)-mx>k)
            {
                mp[s[l]]--;
                l++;
            }
            else ans = max(ans,r-l+1);
        }
        return ans;
    }
};