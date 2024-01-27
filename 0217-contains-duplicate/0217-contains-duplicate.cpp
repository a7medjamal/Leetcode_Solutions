class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_set<int>s(nums.begin(),nums.end());
        if(s.size()!=nums.size()) return true;
        return false;
    }
};