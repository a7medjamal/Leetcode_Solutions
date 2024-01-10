class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq; int n = nums.size(),ans = -1;
        for(auto i:nums)
        {
            if(++freq[i]>(n/2)) ans=i;
        }
        return ans;
    }
};