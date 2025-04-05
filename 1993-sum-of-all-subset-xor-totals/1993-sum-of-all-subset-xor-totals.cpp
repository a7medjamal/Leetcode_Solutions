class Solution {
public:
    int calcXor(vector<int>& nums, int index, int currXor) {
        if (index == nums.size()) {
            return currXor;
        }
        int take = calcXor(nums,index+1,currXor^nums[index]);
        int leave = calcXor(nums,index+1,currXor);
        return take+leave;
    }
    int subsetXORSum(vector<int>& nums) {
        return calcXor(nums, 0, 0);
    }
};