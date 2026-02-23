class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> allsubs;
        string sub="";
        map<string,int> mp;
        for(int i=0;i<(int)s.size();++i) {
            if(i+k<=(int)s.size()) {
                sub=s.substr(i,k);
                allsubs.insert(sub);
                ++mp[sub];
            }
        }
        return((mp.size()==(1<<k))?true:false);
    }
};