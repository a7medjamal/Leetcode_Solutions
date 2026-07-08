const int MOD = 1e9+7;
const int MAXN = 1e5+1;
long long pow10[MAXN];

class Solution {
public:
    Solution() {
        pow10[0]=1;
        for(int i=1;i<MAXN;++i) {
            pow10[i] = (pow10[i-1]*10LL)%MOD;
        }
    }
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
       int n=s.size();
       vector<long long> x(n+1,0);
       vector<long long> sum(n+1,0);
       vector<long long> cntnonzero(n+1,0);
       for(int i=0;i<n;++i) {
            int digit = s[i]-'0';
            sum[i+1]=sum[i]+digit;
            cntnonzero[i+1]=cntnonzero[i]+(digit>0);
            x[i+1]=(digit>0)?(x[i]*10LL+digit)%MOD:x[i];
       }
       int m=queries.size();
       vector<int> ans(m,0);
       for(int i=0;i<m;++i) {
        int l=queries[i][0];
        int r=queries[i][1]+1;
        int len = cntnonzero[r]-cntnonzero[l];
        long long res=(1LL*x[r]-x[l]*pow10[len]%MOD+MOD)%MOD;
        ans[i]=1LL*res*(sum[r]-sum[l])%MOD;
        ans[i]=ans[i]%MOD;
       }
       return ans;
    }
};