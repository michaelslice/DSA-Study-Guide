#include <iostream>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    // Sort the array to prevent duplicates
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;

    // Check for duplicates for fixed element
    for(int i{0}; i < nums.size(); ++i){
        if(i > 0 && nums[i] == nums[i - 1]){
            continue; // If duplicate skip element
        }

        int left{i + 1}; // Left pointer
        int right = nums.size() - 1; // Right pointer

        // Iterate until pointers meet
        while(left < right){
            int threeSum = nums[i] + nums[left] + nums[right];

            if(threeSum == 0){
                ans.push_back({nums[i], nums[left], nums[right]});

                // Check for duplicates for left pointer
                while(left < right && nums[left] == nums[left + 1]) {
                    left++;
                } 

                // Check for duplicates for right pointer
                while(left < right && nums[right] == nums[right - 1]) {
                    --right;
                }

                // Continue the search and increment, decrement pointers
                left++;
                right--;

            // If threeSum is less than 0, we need to find a value that is greater to add up to 0
            } else if(threeSum < 0){
                left++;
            // If threeSum is greater than 0, we need to find a value that is less than 0 to add up to 0
            } else {
                right--;
            }
        }
    }
    return ans;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)