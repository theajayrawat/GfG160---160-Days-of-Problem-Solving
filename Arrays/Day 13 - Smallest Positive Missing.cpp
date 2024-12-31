// TC : O(N)
// SC : O(1)

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n =arr.size();

        for(int i =0;i<n;i++){
            int index = arr[i]-1; 
            if(arr[i]>0){
                while(index<n && index >=0 && arr[i]!= arr[index]){
                    swap(arr[i],arr[index]);
                    index = arr[i]-1;
                }
            }
        }
        
        for(int i =0;i<n;i++){
            if(arr[i]!=i+1)
                return i+1;
        }
        
        return n+1;
    }
};