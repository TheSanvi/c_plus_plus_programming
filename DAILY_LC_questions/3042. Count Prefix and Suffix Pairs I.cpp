#include <vector>
#include <string>
using namespace std;

// Optimize the code using pragma (optional, but ensure correct placement)
#pragma GCC optimize ("O2")

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }
        
        return count;
    }
    
private:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        if (len1 > len2) return false;
        
        // Check if str1 is a prefix
        if (str2.substr(0, len1) != str1) return false;
        
        // Check if str1 is a suffix
        if (str2.substr(len2 - len1, len1) != str1) return false;
        
        return true;
    }
};
