#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {}; // Return an empty array if no solution is found.
}
