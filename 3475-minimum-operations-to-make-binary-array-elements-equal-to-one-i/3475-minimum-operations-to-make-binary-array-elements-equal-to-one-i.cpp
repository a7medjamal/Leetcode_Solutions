class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i <= (int)nums.size()-3;++i) {
            if(!nums[i]) {
                nums[i]^=1;
                nums[i+1]^=1;
                nums[i+2]^=1;
                ++ans;
            }
        }
        int cnt_0 = count(nums.begin(),nums.end(),0);
        if(cnt_0) return -1;
        return ans;
    }
};