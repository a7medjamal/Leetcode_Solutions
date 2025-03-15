class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int l = 1, r = *max_element(nums.begin(),nums.end()), mid;
        while(l<r) {
            mid = (l+r)>>1;
            int cnt = 0;
            for(int i=0;i<nums.size();++i) {
                if(nums[i]<=mid) ++cnt,++i;
            }
            if(cnt>=k) r=mid;
            else l=mid+1;
        } 
        return l;
    }
};