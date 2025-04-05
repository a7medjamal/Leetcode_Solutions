class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0,subsets=(1<<(nums.size()));
        for (int mask = 0; mask < subsets; ++mask) {
            int xorSum = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (mask&(1<<i)) {
                    xorSum^=nums[i];
                }
            }
            ans+=xorSum;
        }
        return ans;
    }
};