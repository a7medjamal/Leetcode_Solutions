class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        vector<int> v; int n = grid.size(), m = grid[0].size();
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int median = v[v.size()/2];
        int ans = 0;
        for(int i=0;i<(int)v.size();++i) {
            if(v[i]%x!=median%x) return -1;
            ans += abs(v[i]-median)/x;
        }
        return ans;
    }
};