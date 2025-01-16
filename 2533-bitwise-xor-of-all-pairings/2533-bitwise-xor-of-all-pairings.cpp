class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        if(nums1.size()%2==0&&nums2.size()%2==0) return 0;
        if(nums1.size()%2==0||nums2.size()%2!=0) {
            for(int i = 0;i < (int)nums1.size();i++) ans^=nums1[i];
        }
        if(nums2.size()%2==0||nums1.size()%2!=0) {
            for(int i = 0;i < (int)nums2.size();i++) ans^=nums2[i];
        }
        return ans;
    }
};