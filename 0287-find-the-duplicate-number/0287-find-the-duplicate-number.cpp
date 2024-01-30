class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int findDuplicate(vector<int>& nums) {
        int a[100001];
        std::memset(a,0,sizeof(a));
        for(auto x: nums){
            a[x]++;
            if(a[x]>1) return x;
        }
        return -1;
    }
};