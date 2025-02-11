class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size(),m = part.size();
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                if(s.find(part)!=string::npos) {
                    s.erase(s.find(part),m);
                }
            }
        }
        return s;
    }
};