class Solution { // O(n) time O(1) space
public:
  int maxProfit(vector<int> &prices) {
    int min_profit = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
      profit = max(profit, prices[i] - min_profit);
      min_profit = min(min_profit, prices[i]);
    }
    return profit;
  }
};