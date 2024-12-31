// TC : O(N)
// SC : O(1)

class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int n = s1.size();
        int m = s2.size();
        int i=0;
        int j=0;
        
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        
        string carry = "0";
        string res ="";
        while(i<n || j<m || carry =="1"){
            int bit1 = i<n ? s1[i]-'0':0;
            int bit2 = j<m ? s2[j]-'0':0;
            
            int sum = bit1+bit2+(carry=="1"?1:0);
            
            if(sum>=2){
                carry="1";
                res+= (sum-2) + '0';
            }else{
                carry="0";
                res+= sum + '0';
            }
            
            i++;
            j++;
        }
        

        reverse(res.begin(),res.end());
        i =0;
        while(i< res.size() && res[i]=='0'){
            i++;
        }
        
        if(i==res.size())
            return "0";
        
        return res.substr(i);
    }
};