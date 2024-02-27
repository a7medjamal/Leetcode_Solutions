class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int search(vector<int>& nums, int target) {
        int l=0,n=nums.size(),r=n-1,mid;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};