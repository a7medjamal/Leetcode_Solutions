class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,x=0,mul=1;
        while(n>0) {
            int digit = n%10;
            if(digit!=0) {
                sum+=digit;
                x+=mul*digit;
                mul*=10;
            }
            n/=10;
        }
        return x*sum;
    }
};