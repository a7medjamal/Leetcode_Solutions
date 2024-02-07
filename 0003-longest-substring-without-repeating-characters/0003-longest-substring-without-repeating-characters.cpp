class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    unordered_map<char,int>mp;
    int lengthOfLongestSubstring(string s) {
        if(s.size()<1) return 0;
        int l=0,r=0,ans = INT_MIN;
        while(r<(int)s.size())
        {
            mp[s[r]]++;
            if(mp.size()==r-l+1) {
                ans = max(ans,r-l+1);
            }
            else if(mp.size()<r-l+1)
            {
                while(mp.size()<r-l+1) {
                    mp[s[l]]--;
                    if(!mp[s[l]]) mp.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};