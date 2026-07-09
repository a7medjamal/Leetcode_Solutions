class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> comp(n,0);
        int components=0;
        for(int i=1;i<n;++i) {
            if(nums[i]-nums[i-1]>maxDiff) ++components;
            comp[i]=components;
        }
        vector<bool> ans;
        for(auto &it:queries) {
            ans.push_back(comp[it[0]]==comp[it[1]]);
        }
        return ans;
    }
};