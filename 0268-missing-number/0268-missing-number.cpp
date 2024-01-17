class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size(),n = nums.size();
        sum = sum*(sum+1)/2;
        for(int i = 0;i < n;i++)
        {
            sum-=nums[i];
        }
        return sum;
    }
};