class Solution {
public:
    bool isHappy(int n) {
       set<int> st;
      
       while(n!=1){
            int sum=0;
           while(n>0){
               sum+=pow(n%10, 2);
               n=n/10;
           }
           if(sum==1) return true;
           if(st.find(sum)!=st.end()){
               return false;
           }
           st.insert(sum);
           n=sum;
       }
return true;
    }
};






























//  int sum=0;
//         while(n>4 || sum==0){
//             sum=0;
//             while(n>0){
//              sum+=pow((n%10),2);
//                  n=n/10;
//             }
//             if(sum>4){
//                 n=sum;
//             }
//             else if(sum==1) return true;
//             else return false;
            
//         }
//         return false;