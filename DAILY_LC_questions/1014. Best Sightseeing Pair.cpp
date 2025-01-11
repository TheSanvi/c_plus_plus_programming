// 1014. Best Sightseeing Pair
// You are given an integer array values where values[i] represents the value of the ith sightseeing spot. Two sightseeing spots i and j have a distance j - i between them.

// The score of a pair (i < j) of sightseeing spots is values[i] + values[j] + i - j: the sum of the values of the sightseeing spots, minus the distance between them.

// Return the maximum score of a pair of sightseeing spots.

 #include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int max_i = values[0]; // Initialize max (values[i] + i)
        int max_score = 0;
        
        for (int j = 1; j < values.size(); ++j) {
            // Calculate the score for pair (i, j)
            max_score = max(max_score, max_i + values[j] - j);
            
            // Update max_i for the next iteration
            max_i = max(max_i, values[j] + j);
        }
        
        return max_score;
    }
};
