class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long mini=0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]<nums[j]) continue;
                for(int k=j+1; k<n; k++){
                      int sum = (nums[i]-nums[j]);
                if(sum > 0)
                    mini = max(mini,(long long)(nums[i]-nums[j])*nums[k]);
                }
                }
            }
         return mini;
    }
};