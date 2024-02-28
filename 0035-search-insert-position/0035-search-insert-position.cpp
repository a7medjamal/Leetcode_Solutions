class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int searchInsert(vector<int>& nums, int target) {
        int l=0,n=nums.size(),r=n-1,mid;
        if(nums[r]<target) return n;
        while(l<=r) {
            mid = l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};