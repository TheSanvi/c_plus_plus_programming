// 1422. Maximum Score After Splitting a String
// Solved
// Easy
// Topics
// Companies
// Hint
// Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

// The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.

 #include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        int maxScore = 0;
        int zeros = 0, ones = 0;
        
        // Count total ones in the string
        for (char c : s) {
            if (c == '1') totalOnes++;
        }
        
        // Traverse the string and calculate scores
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '0') {
                zeros++;
            } else {
                totalOnes--; // Remaining ones in the right substring
            }
            
            // Calculate the score and update maxScore
            int score = zeros + totalOnes;
            maxScore = max(maxScore, score);
        }
        
        return maxScore;
    }
};