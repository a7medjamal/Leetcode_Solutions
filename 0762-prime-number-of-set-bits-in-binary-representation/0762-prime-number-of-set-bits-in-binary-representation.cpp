class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        if (num == 2 || num == 3) {
            return true;
        }
        if (num % 2 == 0 || num % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        vector<int> pre(1e6+9); pre[0]=0;
        for(int i=1;i<1e6;++i) {
            pre[i]=pre[i-1]+isPrime(__builtin_popcount(i));
        }
        return pre[right]-pre[left-1];
    }
};