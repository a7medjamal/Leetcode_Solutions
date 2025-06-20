class Solution {
public:
    int maxDistance(string s, int k) {
        int east=0,west=0,north=0,south=0,ans=0;
        for(int i=0;i<s.size();++i) {
            if(s[i]=='E') ++east;
            if(s[i]=='W') ++west;
            if(s[i]=='N') ++north;
            if(s[i]=='S') ++south;
            int x = abs(east-west), y = abs(north-south);
            int ManDist = x+y;
            int dis = ManDist + min(2*k, (i+1)-ManDist);
            ans=max(ans,dis);
        }
        return ans;
    }
};