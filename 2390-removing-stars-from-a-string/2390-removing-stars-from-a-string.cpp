class Solution {
public:
    string removeStars(string s) {
        string ans(s.size(),0);
        int rsz = 0;
        
        for(auto i:s)
        {
            if(i=='*') rsz--;
            else ans[rsz]=i,++rsz;
        }
        ans.resize(rsz);
        return ans;
    }
};