class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        while(n>0) {
            v.push_back(n%10);
            n/=10;
        } 
        sort(v.begin(),v.end());
        int mx=v.back(); v.pop_back();
        int mx2=v.back();
        return mx*mx2;
    }
};