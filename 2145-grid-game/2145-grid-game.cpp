class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int m = grid[0].size();
        vector<long long>pre(m+1,0),pre2(m+1,0);
        for(int i = 0;i < m;++i) {
            pre[i+1] = pre[i] + grid[0][i];
            pre2[i+1] = pre2[i] + grid[1][i];
        }
        long long ans = LLONG_MAX;
        for(int i = 0;i < m;++i) {
            long long top = pre[m]-pre[i+1];
            long long buttom = pre2[i];
            ans = min(ans,max(top,buttom));
        }
        return ans;
    }
};