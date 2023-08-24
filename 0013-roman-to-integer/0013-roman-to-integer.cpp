class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int ans=0;
        int pre=0;
        map<char, int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        for(int i=n-1; i>=0; i--){
            char current=s[i];
             int value=mpp[current];
             if(value>=pre){
                 ans+=value;
             }else{
                 ans-=value;
             }
             pre=value;
        }
   return ans;
    }
};