// 983. Minimum Cost For Tickets
// Solved
// Medium
// Topics
// Companies
// You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

// Train tickets are sold in three different ways:

// a 1-day pass is sold for costs[0] dollars,
// a 7-day pass is sold for costs[1] dollars, and
// a 30-day pass is sold for costs[2] dollars.
// The passes allow that many days of consecutive travel.

// For example, if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
// Return the minimum number of dollars you need to travel every day in the given list of days.

 class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(366, 0); // dp[i] stores the min cost up to day i
        unordered_set<int> travelDays(days.begin(), days.end()); // Store travel days for quick lookup
        
        for (int i = 1; i <= 365; i++) {
            if (travelDays.count(i) == 0) {
                dp[i] = dp[i - 1]; // If no travel on this day, cost remains same as previous day
            } else {
                dp[i] = min({
                    dp[i - 1] + costs[0], // 1-day pass
                    dp[max(0, i - 7)] + costs[1], // 7-day pass
                    dp[max(0, i - 30)] + costs[2] // 30-day pass
                });
            }
        }
        
        return dp[365];
    }
};
