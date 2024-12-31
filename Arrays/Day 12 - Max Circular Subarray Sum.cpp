// TC : O(N)
// SC : O(1)

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int n =arr.size();
        int maxSum = 0;
        int minSum = 0;
        int currMaxSum = 0;
        int currMinSum = 0;
        int totalSum = 0;
        
        for(int i =0;i<n;i++){
           totalSum+=arr[i];
           
           currMaxSum = max(arr[i], currMaxSum+arr[i]);
           maxSum = max(maxSum, currMaxSum);
           
           
           currMinSum = min(arr[i], currMinSum+arr[i]);
           minSum = min(minSum, currMinSum);
        }
        
        int normalSum = maxSum;
        int circularSum = totalSum - minSum;
        
        if(minSum==totalSum)
            return normalSum;
        
        return max(normalSum, circularSum);
    }
};