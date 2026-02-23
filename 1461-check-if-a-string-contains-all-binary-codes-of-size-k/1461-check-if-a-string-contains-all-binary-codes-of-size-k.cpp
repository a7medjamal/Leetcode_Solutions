class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> allsubs;
        int n=(int)s.size();
        string sub="";
        map<string,int> mp;
        for(int i=0;i<n;++i) {
            if(i+k<=n) {
                sub=s.substr(i,k);
                allsubs.insert(sub);
                ++mp[sub];
            }
        }
        return((mp.size()==pow(2,k))?true:false);
    }
};