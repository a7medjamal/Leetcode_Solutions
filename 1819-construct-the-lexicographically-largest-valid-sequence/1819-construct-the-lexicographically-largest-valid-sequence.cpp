class Solution {
public:
    bool dfs(int index, vector<int> &ans, vector<bool> &vis, int n) {
        if (index == ans.size()) return true;
        if (ans[index] != 0) return dfs(index + 1, ans, vis,n);
        else {
            for (int i = n; i >= 1; i--) {
                if (vis[i]) continue;
                vis[i] = true;
                ans[index] = i;
                if (i == 1) {
                    if (dfs(index + 1, ans, vis, n)) return true;
                } else if (index + i < ans.size() && !ans[index + i]) {
                    ans[i+index] = i;
                    if (dfs(index + 1, ans, vis, n)) return true;
                    ans[index+i]=0;
                }
                ans[index] = 0;
                vis[i] = false;
            }
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(n*2-1,0);
        vector<bool> vis(n+1,false);
        dfs(0,ans,vis,n);
        return ans;
    }
};