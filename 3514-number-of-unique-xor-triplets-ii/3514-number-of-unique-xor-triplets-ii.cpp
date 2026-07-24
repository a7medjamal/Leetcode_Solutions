class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int maxpoweroftwo=1;
        int mx=0;
        for(auto i:nums) mx=max(mx,i);
        while(maxpoweroftwo<=mx) maxpoweroftwo<<=1;
        vector<int> s1(maxpoweroftwo);
        int n=(int)nums.size();
        for(int i=0;i<n;++i) {
            for(int j=i;j<n;++j) {
                s1[nums[i]^nums[j]]=1;
            }
        }
        vector<int> s2(maxpoweroftwo);
        for(int i=0;i<maxpoweroftwo;++i) {
            if(!s1[i]) continue;
            for(auto k:nums) s2[k^i]=1; 
        }
        int ans=0;
        for(auto i:s2) if(i) ++ans;
        return ans;
    }
};