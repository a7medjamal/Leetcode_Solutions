class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        vector<pair<int,int>> index(n*m);
        for(int i = 0;i < n;++i) {
            for(int j = 0;j < m;++j) {
                index[mat[i][j]-1] = make_pair(i,j);
            }
        }
        vector<int> pre_row(n,0),pre_col(m,0);
        for(int i = 0;i < (int)arr.size();++i) {
            auto [r,c] = index[arr[i]-1];
            if(++pre_row[r]==m||++pre_col[c]==n) {
                return i;
            }
        }
        return arr.size();
    }
};