class Solution {
    bool dfs(int u,vector<vector<int>>& graph, unordered_map<int,bool>& safe) {
        if(safe.find(u)!=safe.end()) return safe[u];
        safe[u]=false;
        for(auto v:graph[u]) {
            if(!dfs(v,graph,safe)) return false;
        }
        safe[u]=true;
        return true;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n = graph.size();
        unordered_map<int, bool> safe;
        for(int i=0;i<n;++i) {
            if(dfs(i,graph,safe))
              ans.push_back(i);
        }
        return ans;
    }
};