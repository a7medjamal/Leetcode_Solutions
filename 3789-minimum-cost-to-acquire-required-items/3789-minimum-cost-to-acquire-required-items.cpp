class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long both=min(need1,need2);
        long long rem1=need1-both;
        long long rem2=need2-both;

        long long use_one = (1LL*need1*cost1)+(1LL*need2*cost2);
        long long use_both = (costBoth*both)+(rem1*min(costBoth,cost1))+(rem2*min(costBoth,cost2));

        return min(use_one,use_both);
    }
};