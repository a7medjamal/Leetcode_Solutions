class Solution {
public:
    int maximumInvitations(vector<int>& favorite) {
        int n = favorite.size();
        vector<int> indegree(n, 0), vis(n, false), dp(n, 0);
        for (int i = 0; i < n; ++i)
            indegree[favorite[i]]++;

        vector<int> order;
        for (int i = 0; i < n; ++i)
            if (indegree[i] == 0)
                order.push_back(i);

        for (int i = 0; i < order.size(); ++i) {
            int u = order[i], v = favorite[u];
            dp[v] = max(dp[v], dp[u] + 1);
            if (--indegree[v] == 0)
                order.push_back(v);
        }
        int mx_cycle = 0, sum_chain = 0;
        for (int i = 0; i < n; ++i) {
            if(indegree[i]==0) continue;
            if (!vis[i]) {
                vector<int> path;
                int cur = i;
                while (!vis[cur]) {
                    vis[cur] = true;
                    path.push_back(cur);
                    cur = favorite[cur];
                }
                int st = cur, cycle_sz = 0;
                bool isCycle = false;
                for (auto x : path) {
                    if (x == st)
                        isCycle = true;
                    if (isCycle)
                        ++cycle_sz;
                }
                if (cycle_sz == 2) {
                    sum_chain += (dp[path[0]] + dp[favorite[path[0]]] + 2);
                    vis[path[0]] = vis[favorite[path[0]]] = true;
                } else {
                    mx_cycle = max(mx_cycle, cycle_sz);
                }
            }
        }
        return max(mx_cycle, sum_chain);
    }
};