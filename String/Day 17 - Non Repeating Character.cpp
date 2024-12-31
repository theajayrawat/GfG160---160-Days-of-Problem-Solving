// TC : O(N)
// SC : O(1)


class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int>fre(26, 0);
        
        for(auto i: s){
            fre[i -'a']++;
        }
        
        for(auto i: s){
            if(fre[i - 'a']==1)
                return i;
        }
        
        return '$';
        
    }
};