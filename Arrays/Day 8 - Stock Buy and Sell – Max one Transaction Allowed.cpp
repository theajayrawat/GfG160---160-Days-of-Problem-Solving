// TC : O(N)
// SC : O(1)


class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n =prices.size();
        int maxPrice = 0;
        int buy = prices[0];
        
        for(int i = 1;i<n;i++){
            maxPrice=max(maxPrice, prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        
        return maxPrice;
    }
};