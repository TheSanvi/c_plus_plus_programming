#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        // Helper function to map a single number
        auto mapNumber = [&](int num) -> int {
            if (num == 0) return mapping[0];
            int mapped = 0;
            int place = 1;
            while (num > 0) {
                int digit = num % 10;
                mapped = mapping[digit] * place + mapped;
                place *= 10;
                num /= 10;
            }
            return mapped;
        };

        // Create a vector of pairs (mapped value, original index)
        vector<pair<int, int>> mappedNums;
        for (int i = 0; i < nums.size(); ++i) {
            mappedNums.emplace_back(mapNumber(nums[i]), i);
        }

        // Sort based on the mapped values and keep the original indices for stable sorting
        sort(mappedNums.begin(), mappedNums.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });

        // Prepare the result based on sorted mapped values
        vector<int> result;
        for (const auto& p : mappedNums) {
            result.push_back(nums[p.second]);
        }

        return result;
    }
};
