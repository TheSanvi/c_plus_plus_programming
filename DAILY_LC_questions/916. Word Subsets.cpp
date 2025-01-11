#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq; 
        
        // Step 1: Get the maximum frequency of characters in words2
        for (const string& word : words2) {
            unordered_map<char, int> freq;
            for (char c : word) {
                freq[c]++;
            }
            for (const auto& [c, count] : freq) {
                maxFreq[c] = max(maxFreq[c], count);
            }
        }
        
        vector<string> result;
        
        // Step 2: Check each word in words1 if it satisfies the frequency condition
        for (const string& word : words1) {
            unordered_map<char, int> wordFreq;
            for (char c : word) {
                wordFreq[c]++;
            }
            
            bool isValid = true;
            for (const auto& [c, count] : maxFreq) {
                if (wordFreq[c] < count) {
                    isValid = false;
                    break;
                }
            }
            
            if (isValid) {
                result.push_back(word);
            }
        }
        
        return result;
    }
};
