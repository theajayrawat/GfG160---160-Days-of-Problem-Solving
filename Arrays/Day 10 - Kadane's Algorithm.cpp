// TC : O(N)
// SC : O(1)


class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n =arr.size();
        int sum =0;
        int maxValue = INT_MIN;
        for(int i =0 ;i<n;i++){
            
            sum = max(sum, sum+arr[i]);
            maxValue = max(maxValue, sum);
          
        }
        
        return maxValue;
    }
};