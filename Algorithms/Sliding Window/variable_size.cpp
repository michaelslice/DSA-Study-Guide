#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>

int minSubarrayLength(int target, vector<int>& nums) {
    int n = nums.size();
    int min_length = INT_MAX;
    int window_sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        window_sum += nums[right];

        // Shrink the window until the sum is less than target
        while (window_sum >= target) {
            min_length = min(min_length, right - left + 1);
            window_sum -= nums[left];
            left++;
        }
    }

    return (min_length == INT_MAX) ? 0 : min_length;  // Return 0 if no valid subarray found
}
