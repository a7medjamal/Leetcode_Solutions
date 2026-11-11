class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if (a.size()>b.size())
            return findMedianSortedArrays(b,a);

        int n=a.size(),m=b.size();
        int l=0,r=n;
        while (l<=r) {
            int i=(l+r)/2;
            int j=(n+m+1)/2-i;

            int leftA=(i==0)?INT_MIN:a[i-1];
            int rightA=(i==n)?INT_MAX:a[i];

            int leftB=(j==0)?INT_MIN:b[j-1];
            int rightB=(j==m)?INT_MAX:b[j];

            if(leftA<=rightB&&leftB<=rightA) {
                if((n+m)%2) return max(leftA,leftB);

                return (max(leftA,leftB)+(double)min(rightA,rightB))/2.0;
            }
            if(leftA>rightB) r=i-1;
            else l=i+1;
        }
        return 0;
    }
};