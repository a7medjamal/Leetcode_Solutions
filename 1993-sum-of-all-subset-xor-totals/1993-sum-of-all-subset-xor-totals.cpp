class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size(),ans=0,subsets=(1<<n);
        for (int mask = 0; mask < subsets; ++mask) {
            int xorSum = 0;
            for (int i = 0; i < n; ++i) {
                if (mask&(1<<i)) {
                    xorSum^=nums[i];
                }
            }
            ans+=xorSum;
        }
        return ans;
    }
};