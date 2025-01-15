class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int x = __builtin_popcount(num2),ans=0;
        for (int i = 31; i >= 0; --i) {
        int mask = (1 << i);
        if (num1 & mask) {
                if (x > 0) {
                    ans |= mask;
                    --x;
                }
            }
        }
        for (int i = 0; i < 32 && x > 0; ++i) {
        int mask = (1 << i);
            if (!(ans & mask)) {
                ans |= mask;
                --x;
            }
        }
        return ans;
    }
};