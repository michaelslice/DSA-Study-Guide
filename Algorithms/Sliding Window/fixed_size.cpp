#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>

int maxSumSubarray(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return -1;  // Edge case: If the array is smaller than k

    int max_sum = 0;
    int window_sum = 0;

    // Compute the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        window_sum += nums[i];
    }
    max_sum = window_sum;

    // Slide the window over the rest of the array
    for (int i = k; i < n; i++) {
        window_sum += nums[i] - nums[i - k];  // Add the next element, remove the first element of the previous window
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}
