class Solution {
public:
    const int MOD = 1e9+7;
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n);
        for(auto& r:roads) {
            int st = r[0], end = r[1], time = r[2];
            adj[st].emplace_back(end,time);
            adj[end].emplace_back(st,time);
        }
        priority_queue<pair<long,long>, vector<pair<long,long>>,greater<>> pq;
        vector<long> leastTime(n,LLONG_MAX);
        vector<int> path_cnt(n,0);
        leastTime[0]=0, path_cnt[0]=1;
        pq.emplace(0,0);
        while(!pq.empty()) {
            long long currTime = pq.top().first;
            int currNode = pq.top().second;
            pq.pop();
            if (currTime > leastTime[currNode]) continue;
            for (auto& [neighborNode, roadTime] : adj[currNode]) {
                if (currTime + roadTime < leastTime[neighborNode]) {
                    leastTime[neighborNode] = currTime + roadTime;
                    path_cnt[neighborNode] = path_cnt[currNode];
                    pq.emplace(leastTime[neighborNode], neighborNode);
                }
                else if (currTime + roadTime == leastTime[neighborNode]) {
                    path_cnt[neighborNode] =
                        (path_cnt[neighborNode] + path_cnt[currNode]) % MOD;
                }
            }
        }
        return path_cnt[n-1];
    }
};