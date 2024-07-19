#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> luckyNumbers;
        int m = matrix.size();
        int n = matrix[0].size();
        
        for (int i = 0; i < m; ++i) {
            int minElement = matrix[i][0];
            int minIndex = 0;
            
            // Find the minimum element in the current row
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] < minElement) {
                    minElement = matrix[i][j];
                    minIndex = j;
                }
            }
            
            // Check if the minimum element is the maximum in its column
            bool isLucky = true;
            for (int k = 0; k < m; ++k) {
                if (matrix[k][minIndex] > minElement) {
                    isLucky = false;
                    break;
                }
            }
            
            if (isLucky) {
                luckyNumbers.push_back(minElement);
            }
        }
        
        return luckyNumbers;
    }
};
