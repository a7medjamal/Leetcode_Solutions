class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>deq;
        vector<int>ans; int l=0,r=0;
        for(;r < nums.size();)
        {
          while(!deq.empty()&&nums[r]>deq.back()) deq.pop_back();
          deq.push_back(nums[r]);
          if(r-l+1<k) r++;
          else if(r-l+1==k)
          {
              ans.push_back(deq.front());
              if(deq.front()==nums[l]) deq.pop_front();
              l++,r++;
          }
        }
        return ans;
    }
};