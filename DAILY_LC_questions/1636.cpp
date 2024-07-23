#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
        // Step 1: Count the frequency of each element
        std::unordered_map<int, int> frequency;
        for (int num : nums) {
            frequency[num]++;
        }

        // Step 2: Sort the array with a custom comparator
        std::sort(nums.begin(), nums.end(), [&frequency](int a, int b) {
            // If frequencies are different, sort by frequency in increasing order
            if (frequency[a] != frequency[b]) {
                return frequency[a] < frequency[b];
            }
            // If frequencies are the same, sort by value in decreasing order
            return a > b;
        });

        return nums;
    }
};
