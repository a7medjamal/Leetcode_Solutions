class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0,nm=x;
        while(x) {
            sum+=(x%10);
            x/=10;
        }
        if(nm%sum==0) return sum;
        else return -1;
    }
};