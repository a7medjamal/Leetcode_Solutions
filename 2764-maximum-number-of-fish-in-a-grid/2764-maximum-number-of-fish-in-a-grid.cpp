class Solution {
public:
    void dfs(vector<vector<int>>& grid,int x,int y,int& cnt,int n,int m) {
        if(x<0||x>=n||y<0||y>=m||!grid[x][y]) return;
        cnt+=grid[x][y];
        grid[x][y]=0;

        dfs(grid,x,y+1,cnt,n,m);
        dfs(grid,x,y-1,cnt,n,m);
        dfs(grid,x+1,y,cnt,n,m);
        dfs(grid,x-1,y,cnt,n,m);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] > 0) {
                    int cnt = 0;
                    dfs(grid,i,j,cnt,n,m);
                    ans=max(ans,cnt);
                }
            }
        }
        return ans;
    }
};