class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(auto i:nums) ++freq[i];
        for(auto& [a,b]:freq) if(b%2) return false;
        return true;  
    }
};