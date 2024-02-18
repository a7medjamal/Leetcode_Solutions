class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s;
        for (int x:arr2) {
            while(x) {
                s.insert(x);
                x/=10;
            }
        }
        int ans = 0;
        for (int x:arr1) {
             while(x>ans) {
                 if (s.count(x)) {
                     ans = x;
                     break;
                 }
                 x/=10;
             }
        }
        return (ans?to_string(ans).size():0);
    }
};