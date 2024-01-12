class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26]={0};
        for(auto i:s) freq[i-'a']++;
        for(auto i:t) freq[i-'a']++;
        char ans;
        for(int i = 0;i < 26;i++)
        {
            if(freq[i]&1) ans=i+'a';
        }
        return ans;
    }
};