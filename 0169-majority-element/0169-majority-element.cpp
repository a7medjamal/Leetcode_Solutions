class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = -1; unordered_map<int,int> freq;
        for(auto& i:nums) ++freq[i];
        for(auto& i:nums) {
            if(freq[i]*2>nums.size()) return i;
        }
        return -1;
    } 
};