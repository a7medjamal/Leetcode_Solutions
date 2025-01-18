class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    vector<vector<int>> cost;
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        cost.resize(n,vector<int>(m,INT_MAX));
        dfs(grid, 0, 0, 0);
        return cost[n-1][m-1];
    }
    void dfs(vector<vector<int>>& grid, int i, int j, int lst) {
        int n = grid.size(),m = grid[0].size();
        if(i<0||i>=n||j<0||j>=m||lst>=cost[i][j]) return;
        cost[i][j]=lst;
        if (grid[i][j] == 1) {
            dfs(grid, i, j + 1, lst);
            dfs(grid, i + 1, j, lst+1);
            dfs(grid, i - 1, j, lst+1);
            dfs(grid, i, j - 1, lst+1);
        } else if (grid[i][j] == 2) {
            dfs(grid, i, j - 1, lst);
            dfs(grid, i + 1, j, lst+1);
            dfs(grid, i - 1, j, lst+1);
            dfs(grid, i, j + 1, lst+1);
        } else if (grid[i][j] == 3) {
            dfs(grid, i + 1, j, lst);
            dfs(grid, i, j + 1, lst+1);
            dfs(grid, i, j - 1, lst+1);
            dfs(grid, i - 1, j, lst+1);
        } else if (grid[i][j] == 4) {
            dfs(grid, i - 1, j, lst);
            dfs(grid, i, j + 1, lst+1);
            dfs(grid, i, j - 1, lst+1);
            dfs(grid, i + 1, j, lst+1);
        }
    }
};