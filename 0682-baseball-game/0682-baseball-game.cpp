class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int calPoints(vector<string>& operations) {
        vector<int>s; int ans = 0;
        for(auto i:operations)
        {
            if(i=="+") {
                s.push_back(s[s.size()-1]+s[s.size()-2]);
                ans+=s.back();
            }
            else if(i=="D") {
                s.push_back(2*s[s.size()-1]);
                ans+=s.back();
            }
            else if(i=="C") {
                int sub = s.back();
                s.pop_back();
                ans-=sub;
            }
            else {
                s.push_back(stoi(i));
                ans+=s.back();
            }
        }
        return ans;
    }
};