class Solution {
public:
    string convertToTitle(int columnNumber) {
   string ans;
    while(columnNumber>0){
        if(columnNumber%26==0){
                ans+='A'+25;
                 columnNumber--;
 }
       else{
           ans+=columnNumber%26+'A'-1;
       }
      columnNumber/=26;
    
    }

reverse(ans.begin(), ans.end());
return ans;

    }
};