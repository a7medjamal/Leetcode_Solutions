class Solution {
    bool dfs(int u, vector<vector<int>>& graph,vector<int>& safe) {
        if (safe[u]!=-1)
            return safe[u];
        safe[u] = 0;
        for (auto v : graph[u]) {
            if (!dfs(v, graph, safe))
                return false;
        }
        safe[u] = 1;
        return true;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        int n = graph.size();
        vector<int>safe(n,-1);
        for (int i = 0; i < n; ++i) {
            if (dfs(i, graph, safe))
                ans.push_back(i);
        }
        return ans;
    }
};