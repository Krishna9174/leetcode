class Solution {
public:
    int romanToInt(string s) {
        int ans =0;
        int prev=0;
        unordered_map<char , int> mpp;
        mpp['M'] = 1000;
        mpp['D'] = 500;
        mpp['C'] = 100;
        mpp['L'] = 50;
        mpp['X'] = 10;
        mpp['V'] = 5;
        mpp['I'] = 1;

        for(int i=s.length()-1;i>=0; i--){
            char current=s[i];
            int value=mpp[current];
            if(value>=prev){
                ans+=value;
            }else{
                ans-=value;
            }
            prev=value;
        }
        return ans;
    }
};