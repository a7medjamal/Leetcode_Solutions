class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,x=0;
        while(n>0) {
            if((n%10)>0) {
                sum+=(n%10);
                x=(x*10+(n%10));
            }
            n/=10;
        }
        string s=to_string(x); reverse(s.begin(),s.end());
        x=0;
        for(auto i:s) x=(x*10+(i-'0'));
        return x*sum;
    }
};