class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int getsq(int n) {
        int sq = 0;
        while(n!=0)
        {
            sq = sq + ((n%10)*(n%10));
            n/=10;
        }
        return sq;
    }
    bool isHappy(int n) {
        unordered_set<int>s;
        while(getsq(n)!=1)
        {
            if(s.find(getsq(n))!=s.end()) {
                return false;
            }
            else {
                s.insert(getsq(n));
                n=getsq(n);
            }
        }
        return true;
    }
};