class Solution {
public:
    bool checkDivisibility(int n) {
       int sump=1,sum=0;
       const int nn=n;
       while(n>0) {
        int dig=n%10;
        sum+=dig;
        sump*=dig;
        n/=10;
       }
       return (nn%(sump+sum)==0);
    }
};