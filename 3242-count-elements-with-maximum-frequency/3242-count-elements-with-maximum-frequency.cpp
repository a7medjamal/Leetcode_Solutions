class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0,mx = -1;
        unordered_map<int,int> mp;
        for(auto i:nums) {
            ++mp[i];
            mx=max(mx,mp[i]);
        }
        for(auto i:mp) {
            if(i.second==mx) ans+=i.second;
        }
        return ans;
    }
};