// #include<bits/stdc++.h>
// #include<map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
    //    map<int, int> mm;
    //    for(int i=0;i<n;i++){
    //        mm[nums[i]]++;
    //    }
    //    for(auto it:mm){
    //        if(it.second>n/2){
    //            return it.first;
    //        }
    //    }
    //    return -1;

// 2nd approach

    // int el;
    // int count=0;
    // for(int i=0;i<n;i++){
    //      if(count==0){
    //          el=nums[i];
    //          count++;
    //      }
    //      else if(nums[i]==el){
    //          count++;
    //      }
    //      else{
    //          count--;
    //      }
    // }
    // int cn=0;
    // for(int i=0;i<n;i++){
    //     if(nums[i]==el){
    //          cn++;
    //     }
    //     if(cn>n/2) return el;
    // }

    //  return -1;   

    //  3rd approach
    sort(nums.begin(), nums.end());
    return nums[n/2 ];

    };
};