class Solution {
public:
    bool checkComplete(vector<int>& component, vector<vector<int>>& adj) {
        int size = component.size();
        for (auto u : component) {
            if (adj[u].size() != size - 1)
                return false;
        }
        return true;
    }
    void dfs(int u, vector<bool>& vis, vector<vector<int>>& adj,
             vector<int>& component) {
        vis[u] = true;
        component.push_back(u);
        for (int v : adj[u]) {
            if (!vis[v]) {
                dfs(v, vis, adj, component);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int ans = 0;
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> vis(n, false);
        for (int i = 0; i < n; ++i) {
            if (!vis[i]) {
                vector<int> component;
                dfs(i, vis, adj, component);
                if (checkComplete(component, adj))
                    ++ans;
            }
        }
        return ans;
    }
};