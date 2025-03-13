class Solution {
public:
    bool can(vector<int>& v, vector<vector<int>>& q,int k) {
        int sum = 0, n = v.size();
        vector<int> diff(n+1);
        for(int i=0;i<k;++i) {
            int l = q[i][0], r = q[i][1], val = q[i][2];
            diff[l] += val;
            diff[r+1] -= val;
        }
        for(int i=0;i<n;++i) {
            sum+=diff[i];
            if(sum<v[i]) return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(),l = 0,r = queries.size(), mid;
        if(!can(nums,queries,r)) return -1;
        while(l<=r) {
            mid=(l+r)>>1;
            if(can(nums,queries,mid)) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};