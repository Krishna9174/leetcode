class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> dumy= arr;
        sort(dumy.begin(), dumy.end());
        int n=arr.size();
        long long el1=0;
        long long el2=0;
        int count=0;
        for(int i=0; i<n;i++){
          el1 += arr[i];
          el2 += dumy[i];
          if(el1==el2) count++;
              
        }
        return count;
    }
};