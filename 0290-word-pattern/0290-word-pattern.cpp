class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        set<string>st;
        vector<string>v;
        int i = 0,n = pattern.size(),m = s.size();
        stringstream stringcap(s);
        string word;
        while(stringcap>>word) v.push_back(word); 
        int o = v.size();
        if(o!=n) return false; 
        for(i=0;i<n;i++)
        {
            if(mp.find(pattern[i])!=mp.end()) {if(mp[pattern[i]]!=v[i]) return false;}
            else
            {
                if(st.count(v[i])) return false;
                mp[pattern[i]]=v[i];
                st.insert(v[i]);
            }
        }
        return true;
    }
};