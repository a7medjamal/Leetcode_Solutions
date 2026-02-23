class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> allsubs;
        string sub;
        for(int i=0;i<=(int)s.size()-k;++i) {
            sub=s.substr(i,k);
            allsubs.insert(sub);
        }
        return allsubs.size()==(1<<k);
    }
};