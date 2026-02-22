class Solution {
public:
    int binaryGap(int n) {
        string s="";
        while(n>=1) {
            s+=(to_string(n%2));
            n/=2;
        }
        int ans=0,cnt=0;
        for(int i=0;i<(int)s.size();++i) {
            if(s[i]=='1') {
                for(int j=i;j<(int)s.size();++j) {
                    if(s[j]=='0') ++cnt;
                    else {
                        ans=max(ans,cnt);
                        cnt=1;
                    } 
                }
            }
        }
        return ans;
    }
};