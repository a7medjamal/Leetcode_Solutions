class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int> freq; int ans = 0;
        for(int i=0;i<nums.size();++i) {
            if(nums[i]<k) return -1; 
            if(nums[i]>k) {
                if(!freq[nums[i]]) ++ans;
                ++freq[nums[i]];
            }
        }
        return ans;
    }
};