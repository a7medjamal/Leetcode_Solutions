class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        unordered_map<int,int>mp;
        for(auto i:nums) {mp[i]++; if(mp[i]>1) return i;}
        return -1;
    }
};