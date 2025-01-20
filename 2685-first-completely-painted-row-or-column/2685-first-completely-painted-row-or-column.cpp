class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        unordered_map<int,pair<int,int>> index;
        for(int i = 0;i < n;++i) {
            for(int j = 0;j < m;++j) {
                index[mat[i][j]] = make_pair(i,j);
            }
        }
        int ans = -1;
        vector<int> pre_row(n,0),pre_col(m,0);
        for(int i = 0;i < (int)arr.size();++i) {
            auto [r,c] = index[arr[i]];
            ++pre_row[r]; ++pre_col[c];
            if(pre_row[r]==m||pre_col[c]==n) {
                ans=i;
                break;
            }
        }
        return ans;
    }
};