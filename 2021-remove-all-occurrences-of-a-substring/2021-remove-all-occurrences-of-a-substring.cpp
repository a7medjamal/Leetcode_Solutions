class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size(), m = part.size();
        while (s.find(part) != string::npos) {
            s.erase(s.find(part), m);
        }
        return s;
    }
};