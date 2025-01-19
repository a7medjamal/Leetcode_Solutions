class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int trapRainWater(vector<vector<int>>& heightMap) {
        if (heightMap.size() == 0 || heightMap[0].size() == 0)
            return 0;
        int n = heightMap.size(), m = heightMap[0].size();
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    pq.push({heightMap[i][j], {i, j}});
                    vis[i][j] = true;
                }
            }
        }
        int ans = 0, mx = INT_MIN;
        int dirx[] = {-1, 1, 0, 0};
        int diry[] = {0, 0, -1, 1};
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            int h = top.first;
            int x = top.second.first;
            int y = top.second.second;
            mx = max(mx, h);
            for (int i = 0; i < 4; ++i) {
                int nx = x + dirx[i];
                int ny = y + diry[i];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny]) {
                    if (heightMap[nx][ny] < mx) {
                        ans += (mx - heightMap[nx][ny]);
                    }
                    vis[nx][ny] = true;
                    pq.push({heightMap[nx][ny], {nx, ny}});
                }
            }
        }
        return ans;
    }
};