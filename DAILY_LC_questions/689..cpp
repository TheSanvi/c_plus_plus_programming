#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int MOD = 1e9 + 7;
        int m = target.size(), n = words[0].size();
        
        // Count frequencies of each character at each position
        vector<vector<int>> freq(26, vector<int>(n, 0));
        for (const string& word : words) {
            for (int j = 0; j < n; ++j) {
                freq[word[j] - 'a'][j]++;
            }
        }
        
        // DP table
        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));
        
        // Base case: dp[0][j] = 1 (empty target can always be formed)
        for (int j = 0; j <= n; ++j) {
            dp[0][j] = 1;
        }
        
        // Fill DP table
        for (int i = 1; i <= m; ++i) {
            for (int j = n - 1; j >= 0; --j) {
                // Skip the current column
                dp[i][j] = dp[i][j + 1];
                
                // Use the current column if the character matches
                if (freq[target[i - 1] - 'a'][j] > 0) {
                    dp[i][j] += dp[i - 1][j + 1] * freq[target[i - 1] - 'a'][j];
                    dp[i][j] %= MOD;
                }
            }
        }
        
        return dp[m][0];
    }
};

