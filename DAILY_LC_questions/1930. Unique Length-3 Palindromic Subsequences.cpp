#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        vector<int> first(26, -1); // First occurrence of each character
        vector<int> last(26, -1);  // Last occurrence of each character
        
        // Record the first and last positions of each character
        for (int i = 0; i < n; i++) {
            if (first[s[i] - 'a'] == -1) {
                first[s[i] - 'a'] = i;
            }
            last[s[i] - 'a'] = i;
        }
        
        int result = 0;
        
        // For each character, find the unique characters between first and last occurrence
        for (int i = 0; i < 26; i++) {
            if (first[i] != -1 && first[i] < last[i]) {
                unordered_set<char> unique_chars;
                for (int j = first[i] + 1; j < last[i]; j++) {
                    unique_chars.insert(s[j]);
                }
                result += unique_chars.size(); // Add the count of unique characters
            }
        }
        
        return result;
    }
};

