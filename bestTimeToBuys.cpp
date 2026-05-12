class Solution { // O(n²) time O(1) space
public:
  int maxProfit(vector<int> &prices) {
    int minprofit = prices[0];
    int mxprofit = 0;
    for (int i = 1; i < prices.size(); i++) {
      for (int j = i + 1; j < prices.size(); j++) {
        mxprofit = max(mxprofit, prices[j] - prices[i]);
      }
    }
    return mxprofit;
  }
};