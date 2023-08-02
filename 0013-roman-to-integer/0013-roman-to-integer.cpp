class Solution {
public:
    int romanToInt(string s) {
        int ans =0;
        unordered_map<char , int> mpp;
        mpp['M'] = 1000;
        mpp['D'] = 500;
        mpp['C'] = 100;
        mpp['L'] = 50;
        mpp['X'] = 10;
        mpp['V'] = 5;
        mpp['I'] = 1;

        int n = s.size();
        int i;
        for(i =0;i<n-1;i++){
            bool candi = true;
            char s1 = s[i];  //x 
            char s2 = s[i+1] ;// c
            // mpp[s1] < mpp[s2] 
           if (mpp[s1] <mpp[s2]){
               ans -= mpp[s1];
               candi = false;
           }
           if(mpp.count(s1) && candi){
               ans += mpp[s1] ;
           }
        }
        ans += mpp[s[i]];
        return ans;
    }
};