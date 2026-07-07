class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,x=0,mul=1;
        while(n>0) {
            if((n%10)>0) {
                sum+=(n%10);
                x=x+mul*(n%10);
                mul*=10;
            }
            n/=10;
        }
        return x*sum;
    }
};