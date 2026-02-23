class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> allsubs;
        for(int i=0;i<=(int)s.size()-k;++i) {
            allsubs.insert(s.substr(i,k));
        }
        return allsubs.size()==(1<<k);
    }
};