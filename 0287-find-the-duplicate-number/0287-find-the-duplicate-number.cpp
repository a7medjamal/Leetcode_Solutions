class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int findDuplicate(vector<int>& nums) {
        int arr[100001] = {0};
        for(auto x: nums){
            arr[x]++;
            if(arr[x]>1) return x;
        }
        return -1;
    }
};