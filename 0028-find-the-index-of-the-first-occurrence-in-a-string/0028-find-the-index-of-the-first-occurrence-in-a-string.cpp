class Solution {
public:
    int strStr(string haystack, string needle) {
       int opt= haystack.find(needle);
       if(opt!=string:: npos){
           return opt;
       }
       return -1;
    }
};