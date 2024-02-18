class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp,mp2; int ans = 0;
        for(int i = 0;i < arr1.size();i++)
        {
            while(arr1[i])
            {
                mp[arr1[i]]++;
                arr1[i]/=10;
            }
        }
        for(int i = 0;i < arr2.size();i++)
        {
            while(arr2[i])
            {
                mp2[arr2[i]]++;
                arr2[i]/=10;
            }
        }
        
        for(auto &[i,j]:mp)
        {
            if(mp2.find(i)!=mp2.end())
            {
                string ln = to_string(i);
                ans = max(ans,(int)ln.size());
            }
        }
        return ans;
    }
};