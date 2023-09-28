class Solution {
public:
    
    bool check(int num, int k){
        int count=0;
        while(num>0){
            if(num%2!=0) count++;
            num/=2;
        }
        if(count==k) return true;
        return false;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0; i<nums.size();i++){
            if(check(i, k)){
                ans+=nums[i];
            }
        }
        return ans;
    }
};