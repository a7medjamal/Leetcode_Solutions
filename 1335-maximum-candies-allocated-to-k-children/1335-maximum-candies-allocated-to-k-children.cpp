class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long max_candies = *max_element(candies.begin(),candies.end());
        long long l = 0,r = max_candies, mid, ans=0;
        while(l<r) {
            mid=(l+r+1)>>1;
            if(can(mid,candies,k)) {
                l=mid;
            } else {
                r=mid-1;
            }
        }
        return l;
    }
    bool can(int num_candies, vector<int>& candies, long long k) {
        long long mx_children=0;
        for(int i=0;i<candies.size();++i) {
            mx_children += candies[i]/num_candies;
        }
        return mx_children >= k;
    }
};