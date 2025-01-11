// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        // If target is not achievable
        if ((totalSum + target) % 2 != 0 || totalSum + target < 0) {
            return 0;
        }

        int sumS1 = (totalSum + target) / 2;

        // DP array: dp[j] represents the number of ways to form sum j
        vector<int> dp(sumS1 + 1, 0);
        dp[0] = 1; // There's one way to form sum 0 (by taking no elements)

        for (int num : nums) {
            for (int j = sumS1; j >= num; --j) {
                dp[j] += dp[j - num];
            }
        }

        return dp[sumS1];
    }
};
