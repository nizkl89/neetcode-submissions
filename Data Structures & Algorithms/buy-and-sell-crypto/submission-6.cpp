class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int final_p = 0;
        int l = 0;
        int r = 1;
        while (r < prices.size()) {
            if(prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                if(profit > final_p) {
                    final_p = profit;
                }
            
            }
            else {
                l = r;
            }
        r++;
        }
        return final_p;
    }
};
