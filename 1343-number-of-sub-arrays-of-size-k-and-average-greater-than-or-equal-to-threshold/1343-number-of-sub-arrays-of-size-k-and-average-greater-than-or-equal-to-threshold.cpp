class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,t=0,ans=0;
        for(int i = 0;i < arr.size();i++)
        {
            sum+=arr[i];
            t++;
            if(t==k)
            {
                if(sum/k>=threshold) ans++;
                sum-=arr[i-k+1];
                t--;
            }
        }
        return ans;
    }
};