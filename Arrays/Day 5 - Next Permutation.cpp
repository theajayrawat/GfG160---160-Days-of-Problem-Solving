// TC : O(N)
// SC : O(1)


class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int pivotPoint = -1;
        for(int i = n - 1;i>0;i--){
            if(arr[i-1]<arr[i]){
               pivotPoint = i-1;
               break;
            }
        }
        

        if(pivotPoint==-1){
            sort(arr.begin(),arr.end());
            return;
        }
        
         for (int i = n - 1; i > pivotPoint; i--) {
            if (arr[i] > arr[pivotPoint]) {
                swap(arr[i], arr[pivotPoint]);
                break;
            }
        }
        
        sort(arr.begin()+pivotPoint+1, arr.end());
        
    }
};