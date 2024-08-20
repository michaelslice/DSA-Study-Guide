#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Binary Search
        // Two Pointers
        int left{0};
        int right = numbers.size() - 1;

        vector<int> ans;

        // O(n)
        while(left < right) {
            int sum = numbers[left] + numbers[right];
        
            if(sum == target) {
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                return ans;
            } else if (sum < target) { // Move left pointer to the right
                left++;
            } else { // Move right pointer to the left
                right--;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)