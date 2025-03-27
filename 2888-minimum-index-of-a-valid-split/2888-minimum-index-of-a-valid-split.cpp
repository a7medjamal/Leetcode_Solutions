class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> mp1,mp2,freq;
        int n = nums.size();
        int ans = -1;
        for(auto& i:nums) ++freq[i];
        for(auto& i:nums) {
            if(freq[i]>(n/2)) {
                ans=i;
                break;
            }
        }
        if(ans==-1) return -1;
        int l=0,r=freq[ans];
        for(int i=0;i<n;++i) {
            if(nums[i]==ans) {
                ++l,--r;
            }
            if(l>((i+1)/2)&&r>(n-i-1)/2) return i;
        }
        return -1;
    }
};