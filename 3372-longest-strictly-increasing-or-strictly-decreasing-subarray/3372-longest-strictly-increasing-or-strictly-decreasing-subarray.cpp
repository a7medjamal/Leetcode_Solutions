class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int inc=1,dec=1,ans=0;
        for(int i=1;i<nums.size();++i) {
            if(nums[i-1]>nums[i]) inc=1,++dec;
            else if(nums[i-1]<nums[i]) ++inc,dec=1;
            else inc=dec=1;
            ans=max({ans,inc,dec});
        }
        return ans;
    }
};