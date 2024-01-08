class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        set<string>st;
        vector<string>v;
        int i = 0,n = pattern.size(),m = s.size(); string temp;
        for(i=0;i<m;i++)
        {
            if(s[i]==' ')
            {
                v.push_back(temp);
                temp="";
            }
            else temp+=s[i];
        }
        v.push_back(temp); int o = v.size();
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