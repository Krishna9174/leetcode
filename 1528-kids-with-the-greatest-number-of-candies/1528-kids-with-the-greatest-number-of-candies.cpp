class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
       vector<int> dummy(candies);
       sort(dummy.begin(), dummy.end());
       int element=dummy[n-1];  

      vector<bool> result;
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=element) {
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};