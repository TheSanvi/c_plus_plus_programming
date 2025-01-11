#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        // If k is greater than the length of s, it's impossible to form k palindromes
        if (k > s.length()) return false;
        
        // Frequency map to count occurrences of each character
        unordered_map<char, int> freq;
        
        // Count the frequency of each character in string s
        for (char c : s) {
            freq[c]++;
        }
        
        // Count how many characters have an odd frequency
        int oddCount = 0;
        for (const auto& entry : freq) {
            if (entry.second % 2 != 0) {
                oddCount++;
            }
        }
        
        // If we have more odd frequency characters than k, it's not possible to form k palindromes
        return oddCount <= k;
    }
};
