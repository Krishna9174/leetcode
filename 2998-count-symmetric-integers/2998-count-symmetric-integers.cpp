class Solution {
public:
 bool check(int num){
     bool even;
     string dum=to_string(num);
     int n=dum.size();
     if(n%2==0)  even= true;
     else return false;
     int sum1=0;
     int sum2=0;
     for(int i=0; i<n/2;i++){
        sum1+=dum[i]-'0';
     } 
     for(int i=n/2; i<n;i++){
        sum2+=dum[i]-'0';
     } 
     if(sum1==sum2 && even) return true;
     return false;
 }


    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low; i<=high; i++){
      if(check(i)) ans++;
        }
        return ans;
    }
};