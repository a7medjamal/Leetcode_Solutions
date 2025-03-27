class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size(),mx=nums[0],mx_left=nums[0],partition_idx=0;
        for(int i=1;i<n;++i) {
            if(nums[i]>=mx_left) {
                mx=max(mx,nums[i]);
            }
            else {
                mx_left = mx;
                partition_idx=i;
            }
        }
        return partition_idx+1;
    }
};