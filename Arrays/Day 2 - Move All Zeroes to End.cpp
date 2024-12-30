// TC : O(N)
// SC : O(1)


class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = 0;
       
        while(i<n){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
            i++;
        }
    }
};