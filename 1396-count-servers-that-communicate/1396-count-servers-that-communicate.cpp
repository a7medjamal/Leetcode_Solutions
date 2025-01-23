class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size(), m = grid[0].size();
        vector<int> pre_r(n, 0), pre_c(m, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                pre_r[i] += grid[i][j];
                pre_c[j] += grid[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if(grid[i][j] && (pre_r[i]>1||pre_c[j]>1)) ++ans;
            }
        }
        return ans;
    }
};