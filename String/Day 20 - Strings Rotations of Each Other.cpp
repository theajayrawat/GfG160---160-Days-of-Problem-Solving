// TC : O(N + M)
// SC : O(N)


class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    vector<int> calculateLPS(string &pat, string &txt){
        int n = pat.size();
        vector<int>lps(n,0);
        int i = 1;
        lps[0]=0;
        int len = 0;
        while(i<n){
            if(pat[i]==pat[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len>0){
                   len = lps[len-1]; 
                }else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        
        return lps;
    }
    bool search(string &pat, string &txt){
        vector<int>LPS = calculateLPS(pat,txt);
        int m = txt.size();
        int n = pat.size();
        int i =0;
        int j =0;
        while(i<m){
            if(pat[j]==txt[i]){
                i++;
                j++;
            }
            
            if(j==n){
               return true;
            }else if(i<m && pat[j]!=txt[i]){
                if(j!=0){
                    j=LPS[j-1];
                }else{
                   i++; 
                }
            }
        }
        
        return false;
    }
    bool areRotations(string &s1, string &s2) {
        // Your code here
        string pat = s1;
        string txt = s2 + s2;
        
        return search(pat,txt);
    }
};