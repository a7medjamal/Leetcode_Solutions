class Solution {
public:
    map<char,vector<char>> mp;
    vector<string> ans;
    void dfs(int idx,string& digits,string curr) {
        if(idx==digits.size()) {
            ans.push_back(curr);
            return;
        }
        for(auto i:mp[digits[idx]]) {
            dfs(idx+1,digits,curr+i);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        mp['2']={'a','b','c'};
        mp['3']={'d','e','f'};
        mp['4']={'g','h','i'};
        mp['5']={'j','k','l'};
        mp['6']={'m','n','o'};
        mp['7']={'p','q','r','s'};
        mp['8']={'t','u','v'};
        mp['9']={'w','x','y','z'};
        dfs(0,digits,"");
        return ans;
    }
};
