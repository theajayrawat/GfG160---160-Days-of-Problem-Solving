// TC : O(N)
// SC : O(1)


class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d=d%arr.size();
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end()-d);
        reverse(arr.end()-d,arr.end());


    }
};