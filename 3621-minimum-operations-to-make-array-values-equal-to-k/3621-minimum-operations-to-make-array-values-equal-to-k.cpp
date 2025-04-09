class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,bool> freq; int mn = INT_MAX;
        for(int i:nums) {
            mn=min(mn,i);
            freq[i]=1;
        }
        if(mn<k) return -1;
        int ans = freq.size();
        if(freq[k]) --ans;
        return ans;
    }
};