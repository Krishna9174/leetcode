class Solution {
public:
    int titleToNumber(string columnTitle) {


  int n=columnTitle.size();
  int ans=0;
  int a=0;
   for(int i=n-1; i>=0; i--){
      ans+=(columnTitle[i]-'A'+1)*pow(26,a);
      a+=1;
   }
    return ans;
    }
};