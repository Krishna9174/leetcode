// class Solution {
// public:
// bool check( arr[] a, int k){
//    for(int i=0; i<a.size(); i++){
//        for(int j=i+1; j<arr.size(); j++){
//            if(arr[i]+arr[j]==k) return false;

//        }
//    }
//    return true;
// }
//     int minimumSum(int n, int k) {
//         int arr[];
//         int a=1;
//    for(int i=0; i<n; i++){
//     if(check(arr[], k)){
//         arr.push_back(1);

//     }
//     else a++;
//    }
//    int sum=0;
//    for(int i=0; i<n; i++){
//        sum+=arr[i];
//    }
//       return sum;  
//     }
// };
class Solution {
public:
    int minimumSum(int n, int k) {
        int ans=0;
        int size=1;
        set<int> nums;
        for(int i=1; size<=n; i++){
           if(nums.find(i)==nums.end()&& nums.find(k-i)==nums.end()){
               ans+=i;
               size++;
               nums.insert(i);
           }
        }
        return ans;
    }
};