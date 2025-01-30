class Solution {
public:
    Solution () {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        long long ans = nums[0];
        long long pre = 0,suf = 0,n=nums.size();
        for(int i = 0;i < n;++i) {
            pre = (pre==0?1:pre) * nums[i];
            suf = (suf==0?1:suf) * nums[n-i-1];
            ans=max({ans,pre,suf});
        }
        return ans;
    }
};