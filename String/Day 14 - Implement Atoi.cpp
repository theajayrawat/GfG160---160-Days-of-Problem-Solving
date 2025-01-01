// TC : O(N)
// SC : O(1)


class Solution {
  public:
    int myAtoi(char *s) {
        
        // remove leading zero;
        string str = s;
        
        int i = 0;
        while(i<str.size() && str[i]=='0'){
            i++;
        }
        
        str = str.substr(i);
        
        //remove whitespaces and sing
        int sing = 1;
        if(str[0]=='-' || str[0]=='+'){
            sing = s[i]=='-' ? -1 : 1;
            str = str.substr(1);
        }
         
        
        i=0;
        while(i<str.size() && isdigit(str[i])){
            i++;
        }
        
        str = str.substr(0,i);
        
        
        // remove alpha 
        i=0;
        while(i<str.size() && isdigit(str[i])){
            i++;
        }
        
        str = str.substr(0,i);
        

        // convert string to integer
        long long ans = 0;
        for(int i =0;i<str.size();i++){
            ans = ans *10 + str[i] - '0';
            long long check = sing*ans;
            if(check >= INT_MAX ){
                return INT_MAX;
            }else if (check <= INT_MIN){
                return INT_MIN;
            }
            
        }
        

        return (int)ans*sing;
    }
};