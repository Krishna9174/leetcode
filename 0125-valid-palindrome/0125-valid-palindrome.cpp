class Solution {
public:
    bool isPalindrome(string s) {
        //string temp="";
        // for(int i=0; i<s.size(); i++){
        //     if(isalpha(s[i])){
        //         temp+=tolower(s[i]);
        //     }
        //     if (s[i] == ' ' || s[i] == ',' || s[i] == ':') {
        //         continue;
        //     }
        //     else{
        //         temp+=s[i];
        //     }
        // }
        // for(int i=0; i<temp.length(); i++){
        //     if(temp[i]!=temp[temp.length()-i-1]){
        //         return false;
        //     }
        // }
        // return true;
        int start=0;
        int end= s.size()-1;
        while(start<=end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])) return false;
            else{
                start++;
                end--;
            }
        }
        return true;

    }
};