class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i: nums) {if(i>k) ++freq[i]; if(i<k) return -1;}
        return freq.size();
    }
};