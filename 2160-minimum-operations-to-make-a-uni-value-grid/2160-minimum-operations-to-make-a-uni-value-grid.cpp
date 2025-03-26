class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        vector<int> v;
        for(int i=0;i<grid.size();++i) {
            for(int j=0;j<grid[0].size();++j) {
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int median = v[v.size()/2];
        int ans = 0;
        for(int i=0;i<v.size();++i) {
            if(v[i]%x!=median%x) return -1;
            ans += abs(v[i]-median)/x;
        }
        return ans;
    }
};