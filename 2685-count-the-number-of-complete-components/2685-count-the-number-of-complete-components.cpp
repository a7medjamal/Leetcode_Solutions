class Solution {
public:
    ;
    void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited,int& nodes,int& edges) {
        visited[u]=true;
        ++nodes;
        edges+=adj[u].size();

        for(int v:adj[u]) {
            if(!visited[v]) {
                dfs(v,adj,visited,nodes,edges);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n,false);
        int cntcompletecomp=0;
        for(auto& edge: edges) {
            int u=edge[0],v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<n;++i) {
            if(!visited[i]) {
                int nodes=0,totedges=0;
                dfs(i,adj,visited,nodes,totedges);
                totedges/=2;
                if(totedges==(nodes*(nodes-1))/2) ++cntcompletecomp;
            }
        }
        return cntcompletecomp;
    }
};