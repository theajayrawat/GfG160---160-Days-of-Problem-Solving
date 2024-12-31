// TC : O(N)
// SC : O(1)


class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int proPre =1;
        int proSuff =1;
        int res = INT_MIN;
        int n = arr.size();
        for(int i =0;i<n;i++){
            proPre*=arr[i];
            proSuff*=arr[n-i-1];
            res=max(res,max(proPre,proSuff));
            
            if(proPre == 0){
                proPre = 1;
            }
            
            if(proSuff == 0){
                proSuff = 1;
            }
        }
        
        return res;
    }
};