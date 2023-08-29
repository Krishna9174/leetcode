class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n=password.size();
        if(n<8) return false;
        bool upper=false, lower=false, digit=false, special=false;

        for(auto c: password){
            if(c>='a' && c<='z') lower=true;
            else if(c>='A' && c<='Z') upper=true;
            else if(isdigit(c)) digit=true;
            else special=true;
        }
        for(int i=0; i+1<n; i++){
            if(password[i]==password[i+1]) return false;
        }
        if(upper&& lower&& digit&& special) return true;
        return false;
    }
};