class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int maxProfit(vector<int>& prices) {
        int low_price = prices[0],max_profit = 0;
        
        for(int i=1;i<prices.size();i++){
            max_profit = max(max_profit,prices[i]-low_price);
            low_price = min(prices[i],low_price);
        }

        return max_profit;
    }
};