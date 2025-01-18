class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        int dist[n][m];
        for(int i=0;i<n;++i) {
            for(int j = 0;j < m;++j) {
                dist[i][j]=INT_MAX;
            }
        }
        deque<pair<int,int>>dq;
        dq.push_back({0,0});
        dist[0][0]=0;
        while(dq.size()>0){
            auto curr=dq.front();
            dq.pop_front();
            int x=curr.first,y=curr.second;
            int dir=grid[x][y];
            for(int i=0;i<4;i++){
                int nx=x+dx[i],ny=y+dy[i];
                int W=1;
                if(i+1==dir) W=0;
                if(nx<n&&ny<m&&nx>=0&&ny>=0){
                    if(dist[nx][ny]>dist[x][y]+W){
                        dist[nx][ny]=dist[x][y]+W;
                        if(W==1)
                            dq.push_back({nx,ny});
                        else
                            dq.push_front({nx,ny});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};