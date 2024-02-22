class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(NULL);
    }
    stack<int>st;
    void operation(string s)
    {
        if (st.empty()) return;
        
        int y = st.top();
        st.pop();
        
        if(s.empty()) return;
        
        int x = st.top();
        st.pop();
        
        if(s=="+") st.push(x+y);
        else if(s=="-") st.push(x-y);
        else if(s=="*") st.push(x*y);
        else st.push(x/y);
    }
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        for(auto i:tokens) {
            if(i=="+"||i=="-"||i=="*"||i=="/")
            {
                operation(i);
            }
            else st.push(stoi(i));
        }
        if(st.empty()) return 0;
        return st.top();
    }
};