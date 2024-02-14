class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    bool isValid(string s) {
        map<char, char> mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        set<char> keys = {'(', '{', '['};
        stack<char> st;
        for(char c:s)
        {
            if(keys.find(c) != keys.end()) st.push(c);
            else if(!st.empty() && mp[st.top()]==c) st.pop();
            else return false;
        }
        return (st.empty()?1:0);
    }
};