class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k) return false;
        unordered_set<string> allsubs;
        for(int i=0;i<=(int)s.size()-k;++i) {
            allsubs.insert(s.substr(i,k));
        }
        return allsubs.size()==(1<<k);
    }
};