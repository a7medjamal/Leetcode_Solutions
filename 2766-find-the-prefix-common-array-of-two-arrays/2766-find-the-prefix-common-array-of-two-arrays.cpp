class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = (int)A.size();
        vector<int>C(n,0);
        unordered_map<int,int>freq;
        int common = 0;
        for(int i=0;i < n;++i) {
            freq[A[i]]++;
            freq[B[i]]++;
            if(A[i]==B[i]&&freq[A[i]]>=2) ++common;
            else {
                if(freq[A[i]]>=2) ++common;
                if(freq[B[i]]>=2) ++common;
            }
            C[i]=common;
        }
        return C;
    }
};