class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left = 0;
        int maxProfit = 0;

        for (int right = 1; right < prices.size(); right++) {
            
            // If we find a lower buying price
            if (prices[right] < prices[left]) {
                left = right;
            }

            // Calculate current profit
            int profit = prices[right] - prices[left];

            // Update maximum profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};