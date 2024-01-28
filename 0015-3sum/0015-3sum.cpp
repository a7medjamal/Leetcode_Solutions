class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
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
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};