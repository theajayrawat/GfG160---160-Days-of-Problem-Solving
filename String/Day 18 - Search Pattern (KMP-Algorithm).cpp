// TC : O(N + M)
// SC : O(N)


class Solution {
  public:
  vector<int> CalculateLPS(string& pat, string& txt){
      int n = pat.size();
      vector<int>lps(n,0);
      
      lps[0] = 0;
      int len = 0;
      int i = 1;
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
  
    vector<int> search(string& pat, string& txt) {
        // code here
        
        vector<int>LPS = CalculateLPS(pat,txt);

        int m = txt.size();
        int n = pat.size();
        vector<int>ans;
        int i = 0;
        int j = 0;
        
        while(i<m){
            if(txt[i]==pat[j]){
                i++;
                j++;
            }
            
            if(j==n){
                ans.push_back(i-j);
                j = LPS[j-1];
            }else if(i<m && txt[i]!=pat[j]){
                if(j!=0){
                  j = LPS[j-1];  
                }else{
                    i++;
                }
            }
            
        }
        
        return ans;
    }
    
};