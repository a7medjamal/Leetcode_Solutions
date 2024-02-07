class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>v,ans;
        for(int i = 0;i < (int)s.size();i++)
        {
            ++mp[s.substr(i,10)];
        }
        for(auto &[a,b]:mp)
        {
            if(b>1) ans.push_back(a);
        }
        return ans;
    }
};