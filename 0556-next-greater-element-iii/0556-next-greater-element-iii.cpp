class Solution {
public:
    int nextGreaterElement(int n) {
      string digit=to_string(n);
      next_permutation(digit.begin(), digit.end());
      int res= stoll(digit);
      return(res >INT_MAX || res<=n ) ? -1: res;
    }
};