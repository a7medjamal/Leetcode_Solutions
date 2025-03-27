class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size(), d = nums[0],freq = 1;
        for(int i=1;i<n;++i){
            if(nums[i]!=d) --freq;
            else ++freq;
            if(!freq) d = nums[i],freq = 1;
        }
        int max_freq = 0;
        for(int i=0;i<n;++i) if(nums[i]==d) max_freq++;
        int prefix_count = 0;
        for(int i=0;i<n-1;++i){
            if(nums[i]==d) prefix_count++,max_freq--;
            if((prefix_count > (i+1)/2) and (max_freq > (n-i-1)/2)) return i;
        }
        return -1;
    }
}; 