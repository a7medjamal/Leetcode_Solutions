class Solution {
public:
    int numTilePossibilities(string tiles) {
        int freq[26]={0};
        for(char i:tiles) {
            ++freq[i-'A'];
        }
        return cnt(freq);
    }
    int cnt(int freq[26]) {
        int ans = 0;
        for(int i=0;i<26;++i) {
            if (freq[i]) {
                ++ans;
                --freq[i];
                ans += cnt(freq);
                ++freq[i];
            }
        }
        return ans;
    }
};