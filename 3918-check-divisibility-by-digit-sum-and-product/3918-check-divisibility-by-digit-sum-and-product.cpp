class Solution {
public:
    bool checkDivisibility(int n) {
       int sump=1,sum=0;
       int nn=n;
       while(nn>0) {
        int dig=nn%10;
        sum+=dig;
        sump*=dig;
        nn/=10;
       }
       return (n%(sump+sum)==0);
    }
};