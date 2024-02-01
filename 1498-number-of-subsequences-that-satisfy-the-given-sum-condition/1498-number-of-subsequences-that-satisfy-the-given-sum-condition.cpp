class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int mod=1e9+7;
        sort(nums.begin(), nums.end());
        int n=nums.size();       
        vector<int> pow2mod(n+1,1);
        for (int i=1; i<=n; i++) pow2mod[i]=(pow2mod[i-1]<<1)%mod;
        int l=0, r=n-1;
        int ans=0;
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                ans=(ans+pow2mod[r-l])%mod;
                l++;
            }
            else r--;
        }
        return ans;
    }
};