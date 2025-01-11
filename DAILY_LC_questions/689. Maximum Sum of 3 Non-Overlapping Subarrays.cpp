// 689. Maximum Sum of 3 Non-Overlapping Subarrays
// Hard
// Topics
// Companies
// Given an integer array nums and an integer k, find three non-overlapping subarrays of length k with maximum sum and return them.

// Return the result as a list of indices representing the starting position of each interval (0-indexed). If there are multiple answers, return the lexicographically smallest one.

 

class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);

        // Compute prefix sum
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        // Left and right max subarray indices
        vector<int> left(n, 0), right(n, n - k);

        // Fill the left array
        int maxSumLeft = prefixSum[k] - prefixSum[0];
        for (int i = k; i < n; i++) {
            int currentSum = prefixSum[i + 1] - prefixSum[i + 1 - k];
            if (currentSum > maxSumLeft) {
                maxSumLeft = currentSum;
                left[i] = i + 1 - k;
            } else {
                left[i] = left[i - 1];
            }
        }

        // Fill the right array
        int maxSumRight = prefixSum[n] - prefixSum[n - k];
        for (int i = n - k - 1; i >= 0; i--) {
            int currentSum = prefixSum[i + k] - prefixSum[i];
            if (currentSum >= maxSumRight) {
                maxSumRight = currentSum;
                right[i] = i;
            } else {
                right[i] = right[i + 1];
            }
        }

        // Find the maximum sum of three subarrays
        vector<int> result(3, 0);
        int maxTotalSum = 0;

        for (int mid = k; mid <= n - 2 * k; mid++) {
            int leftIndex = left[mid - 1];
            int rightIndex = right[mid + k];
            int totalSum = (prefixSum[mid + k] - prefixSum[mid]) +
                           (prefixSum[leftIndex + k] - prefixSum[leftIndex]) +
                           (prefixSum[rightIndex + k] - prefixSum[rightIndex]);

            if (totalSum > maxTotalSum) {
                maxTotalSum = totalSum;
                result = {leftIndex, mid, rightIndex};
            }
        }

        return result;
    }
};
