class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        vector<vector<string>>ans;
        int n = strs.size();
        for(int i = 0;i < n;i++)
        {
            string w = strs[i];
            sort(w.begin(),w.end());
            mp[w].push_back(strs[i]);
        }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};