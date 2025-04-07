class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum&1) return false;
        const int N = 1e4+5;
        bitset<N> dp; dp[0] = 1;
        for(auto i:nums) {
            dp |= dp << i;
            if(dp[sum/2]) return true;
        }
        return dp[sum/2];
    }
};