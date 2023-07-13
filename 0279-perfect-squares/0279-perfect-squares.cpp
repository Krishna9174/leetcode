
class Solution {
public:
    int numSquares(int n) {
        std::vector<int> dp(n + 1, INT_MAX); // Create a vector to store minimum number of perfect squares for each number up to 'n'
        dp[0] = 0; // Base case: Number of perfect squares needed to form 0 is 0

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                dp[i] = std::min(dp[i], 1 + dp[i - j * j]);
            }
        }

        return dp[n];
    }
};