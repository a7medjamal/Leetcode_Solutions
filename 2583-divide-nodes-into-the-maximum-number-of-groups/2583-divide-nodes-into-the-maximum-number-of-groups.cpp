class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for (auto& e : edges) {
            int a = e[0] - 1, b = e[1] - 1;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> d(n);
        for (int i = 0; i < n; ++i) {
            queue<int> q{{i}};
            vector<int> dist(n);
            dist[i] = 1;
            int mx = 1;
            int root = i;
            while (q.size()) {
                int a = q.front();
                q.pop();
                root = min(root, a);
                for (int b : adj[a]) {
                    if (dist[b] == 0) {
                        dist[b] = dist[a] + 1;
                        mx = max(mx, dist[b]);
                        q.push(b);
                    } else if (abs(dist[b] - dist[a]) != 1) {
                        return -1;
                    }
                }
            }
            d[root] = max(d[root], mx);
        }
        return accumulate(d.begin(), d.end(), 0);
    }
};