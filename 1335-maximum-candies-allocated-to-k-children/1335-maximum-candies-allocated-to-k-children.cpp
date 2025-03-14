class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long max_candies = accumulate(candies.begin(),candies.end(),0LL);
        long long l = 1,r = max_candies/k, mid, ans=0;
        while(l<=r) {
            mid=(l+r)>>1;
            if(can(mid,candies,k)) {
                l=mid+1;
            } else {
                r=mid-1;
            }
        }
        return l-1;
    }
    bool can(int num_candies, vector<int>& candies, long long k) {
        long long mx_children=0;
        for(int i=0;i<candies.size();++i) {
            mx_children += candies[i]/num_candies;
        }
        return mx_children >= k;
    }
};