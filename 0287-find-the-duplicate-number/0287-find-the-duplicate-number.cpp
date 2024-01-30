class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums) {mp[i]++; if(mp[i]>1) return i;}
        return -1;
    }
};