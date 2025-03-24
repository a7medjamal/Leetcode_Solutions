class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans = 0,lst = 0;
        sort(meetings.begin(),meetings.end());
        for(auto& i:meetings) {
            int l = i[0], r = i[1];
            if(lst+1<l) ans+=(l-lst-1);
            lst = max(lst,r);
        }
        ans += days-lst;
        return ans;
    }
};