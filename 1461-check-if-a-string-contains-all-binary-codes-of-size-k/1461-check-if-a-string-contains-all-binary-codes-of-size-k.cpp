class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> allsubs;
        int n=(int)s.size();
        string sub="";
        for(int i=0;i<n;++i) {
            if(i+k<=n) {
                sub=s.substr(i,k);
                allsubs.insert(sub);
            }
        }
        map<string,int> mp;
        for(auto i:allsubs) ++mp[i];
        return((mp.size()==pow(2,k))?true:false);
    }
};