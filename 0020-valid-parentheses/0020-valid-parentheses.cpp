class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    bool isValid(string s) {
        unordered_map<char,char> mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        stack<char> st;
        for(char c:s)
        {
            if(mp.find(c) != mp.end()) st.push(c);
            else if(!st.empty() && mp[st.top()]==c) st.pop();
            else return false;
        }
        return (st.empty()?1:0);
    }
};