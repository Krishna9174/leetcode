
class Solution {
public:
// bool chek(string a, string b){
//     int n1=a.length();
//     int n2=b.length();
//     int j;
//     for(int i=0; i<n1-n2; i++){
//         for(int j=0; j<n2; j++){
//             if(a[i+j]!=b[j]) break;
//         }
//     }
//     if(j==n2) return 1;
//     return -1;
// }
    int repeatedStringMatch(string a, string b) {
        int ans=1;
        string temp=a;
        while(a.length()<b.length()){
            a += temp;
            ans++;
        }
        if(a.find(b)!=-1){
            return ans;
        }
         if((a+temp).find(b) != -1){
            return ans+1;
        }
        return -1;
    }
};