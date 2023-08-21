class Solution {
public:
bool check(int a, int b){
    int a1=0, a2=0; 
     while(a>0 || b>0){
         int b1=a%10;
         int b2=b%10;
         a1=max(b1, a1);
         a2=max(b2, a2);
         a=a/10;
         b=b/10;

     }
     if(a1==a2) return true;
     return false;

}
    int maxSum(vector<int>& nums) {
        int sum=-1;
        for(int i=0; i<nums.size(); i++){
         for(int j=i+1; j<nums.size(); j++){
                  int a=nums[i];
                  int b=nums[j];
                 if(check(a,b)){
                sum=max(sum, a+b);
                 }
        }
        }
       return sum; 
    }
};