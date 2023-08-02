class Solution {
public:
    int myAtoi(string s) {
       int len=s.length();
       double num=0;
       int i=0;
    while(s[i]==' ')i++;
    bool positive=s[i]=='+';
    bool negetive =s[i]=='-';
    positive==true? i++:i;
    negetive==true? i++:i;
    while(i<len && s[i]>='0' && s[i]<='9'){
        num=num*10+(s[i]-'0');
        i++;
    }
    if(negetive) num=-num;
    num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
    
    return int(num);
    }
};