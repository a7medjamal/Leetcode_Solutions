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
                int sum = s[s.size()-1]+s[s.size()-2];
                s.push_back(sum);
                ans+=(sum);
            }
            else if(i=="D") {
                int mul = 2*s[s.size()-1];
                s.push_back(mul);
                ans+=mul;
            }
            else if(i=="C") {
                int sub = s.back();
                s.pop_back();
                ans-=sub;
            }
            else {
                int nm = stoi(i);
                s.push_back(nm);
                ans+=nm;
            }
        }
        return ans;
    }
};