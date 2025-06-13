class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if(!p) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l = 0, r = nums[n-1]-nums[0], md;
        while(l<r) {
            md = (l+r)/2; int cnt = 0;
            for(int i=1;i<n;i++) {
                if(md>=(nums[i]-nums[i-1])) ++cnt,++i;
            }
            if(cnt>=p) r=md;
            else l=md+1;
        }
        return l;
    }
};