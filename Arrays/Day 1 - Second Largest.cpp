// TC : O(N)
// SC : O(1)

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest = -1;
        int secondLargest = -1;
        
        for(int i =0;i<arr.size();i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }else if(arr[i]>secondLargest && arr[i]<largest ){
                secondLargest = arr[i];
            }
        }
        
        return secondLargest;
    }
};