class Solution {
public:
    string getHappyString(int n, int k) {
        queue<string> q;
        q.push("a");
        q.push("b");
        q.push("c");
        vector<string> ans;
        while(!q.empty()) {
            string s = q.front();
            q.pop();
            if(s.size()==n) {
                ans.push_back(s);
                continue;
            }
            for(auto i:{'a','b','c'}) {
                if(s.back()!=i) q.push(s+i);
            }
        }
        return (k>ans.size()?"":ans[k-1]);
    }
};