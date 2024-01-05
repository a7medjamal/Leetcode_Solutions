class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        vector<vector<int>>vp(nums.size()+1);
        for(auto [a,b]:mp)
        {
           vp[b].push_back(a);
        }
        vector<int>ans;
        for(int i = vp.size()-1;i>=0;i--)
        {
            for(auto j:vp[i])
            {
                if(k>0)
                {
                    ans.push_back(j);
                    k--;
                }
            }
        }
        return ans;
    }
};