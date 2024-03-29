class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r = 1;
        while(r<n)
        {
            while(nums[l]!=0&&l<r) l++; 
            if(nums[l]==0&&nums[r]!=0)
            {
                swap(nums[l],nums[r]);
                l++;
            }
            r++;
        }
    }
};