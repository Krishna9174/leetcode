class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int n=nums.size();
        unordered_map<int, int> mpp;
          vector<int> ans;
          for(int i=0; i<n; i++){
              mpp[nums[i]]++;
          }
          for(auto x: mpp){
              if(x.second > n/3){
                  ans.push_back(x.first);

              }
          }
          return ans;
    }
};








































//  int n = nums.size();
//         int el1=INT_MIN;
//         int el2=INT_MIN;
//         int cn1 = 0, cn2 = 0;

//         for (int i = 0; i < n; i++) {
//             if (cn1 == 0 && el2 != nums[i]) {
//                 cn1++;
//                 el1 = nums[i];
//             } else if (cn2 == 0 && el1 != nums[i]) {
//                 cn2++;
//                 el2 = nums[i];
//             }
//             else if(nums[i]==el1){
//                 cn1++;
//             }
//             else if(nums[i]==el2){
//                 cn2++;
//             }
            
//              else {
//                 cn1--;
//                 cn2--;
//             }
//         }

//         cn1 = 0;
//         cn2 = 0;
//         vector<int> result;
//         int mini = (int)(n / 3) + 1;

//         for (int i = 0; i < n; i++) {
//             if (nums[i] == el1) {
//                 cn1++;
//             } else if (nums[i] == el2) {
//                 cn2++;
//             }
//         }

//         if (cn1 >= mini) {
//             result.push_back(el1);
//         }
//         if (cn2 >= mini) {
//             result.push_back(el2);
//         }

//         return result;