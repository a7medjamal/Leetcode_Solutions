class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,bool> freq;
        for(int i:nums) {
            if(i<k) return -1;
            freq[i]=1;
        }
        int ans = freq.size();
        if(freq[k]) --ans;
        return ans;
    }
};