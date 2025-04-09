class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();++i) {
            if(nums[i]<k) return -1; 
            if(nums[i]>k) ++freq[nums[i]];
        }
        return freq.size();
    }
};