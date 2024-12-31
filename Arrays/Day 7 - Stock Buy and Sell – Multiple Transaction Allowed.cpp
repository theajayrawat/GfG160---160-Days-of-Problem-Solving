// TC : O(N)
// SC : O(1)

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int  n = prices.size();
        int maxiProfit = 0;
        int buy = prices[0];

        for(int i = 1 ;i<n;i++){
            if(buy<prices[i]){
                maxiProfit += prices[i]-buy;
                buy = prices[i];
            }else{
                buy = min(buy, prices[i]);
            }
            
        }
        
        return maxiProfit;
    }
};
