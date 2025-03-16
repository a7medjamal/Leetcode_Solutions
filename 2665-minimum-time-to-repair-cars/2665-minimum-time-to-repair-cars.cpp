class Solution {
public:
    long long repairCars(vector<int>& ranks, long long cars) {
        long long l = 1, r =  *min_element(ranks.begin(),ranks.end())*cars*cars, mid, ans = r, cnt;
        while(l<=r) {
            mid=(l+r)>>1LL;
            cnt = 0;
            for(auto r:ranks) {
                cnt += sqrtl(mid/r);
                if(cnt>=cars) break;
            }
            if(cnt<cars) l=mid+1;
            else r=mid-1,ans=mid;
        }
        return ans;
    }
};