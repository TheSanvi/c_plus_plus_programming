#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int MOD = 1e9 + 7;
        int m = target.size();
        int n = words[0].size();

        // Step 1: Frequency count of characters at each column
        vector<vector<int>> freq(26, vector<int>(n, 0));
        for (const string& word : words) {
            for (int j = 0; j < n; ++j) {
                freq[word[j] - 'a'][j]++;
            }
        }

        // Step 2: DP table
        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

        // Base case: dp[0][j] = 1
        for (int j = 0; j <= n; ++j) {
            dp[0][j] = 1;
        }

        // Fill DP table
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                // Option 1: Don't use column j
                dp[i][j] = dp[i][j - 1];

                // Option 2: Use column j
                if (freq[target[i - 1] - 'a'][j - 1] > 0) {
                    dp[i][j] += dp[i - 1][j - 1] * freq[target[i - 1] - 'a'][j - 1];
                    dp[i][j] %= MOD;
                }
            }
        }

        return dp[m][n];
    }
};

