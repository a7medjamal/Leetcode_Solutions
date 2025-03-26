class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<n;++i) {
            if(i==n/2) continue;
            ans += abs(nums[i]-nums[n/2]);
        }
        return ans;
    }
};