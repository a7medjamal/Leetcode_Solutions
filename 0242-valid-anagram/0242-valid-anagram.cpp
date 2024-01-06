class Solution {
private:
    int freq[26]={0};
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        for(int i = 0;i < s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i = 0;i < t.size();i++)
        {
            freq[t[i]-'a']--;
        }
        for(int i = 0;i < 26;i++)
        {
            if(freq[i]!=0) return false;
        }
        return true;
    }
};