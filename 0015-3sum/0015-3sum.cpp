class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        int n = nums.size();
        for(int i = 0;i < n-2;i++)
        {
            int l = i+1,r = n-1;
            while(l<r)
            {
                if(nums[l]+nums[r]+nums[i]<0) l++;
                else if(nums[l]+nums[r]+nums[i]>0) r--;
                else
                {
                    s.insert({nums[l],nums[r],nums[i]});
                    l++,r--;
                }
            }
        }
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};