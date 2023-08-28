#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {


    int maxi= nums[0]; // Initialize maxi to index 0 
    int mini=  nums[0]; // Initialize mini to index 0 
    for(int i{0}; i < nums.size(); ++i) // iterate through the vector until the end
    {
        mini = min(mini, nums[i]); // find the smallest element in the vector by comparing mini to the current element in the vector 
        maxi = max(maxi, nums[i]); // find the largest element in the vector        
    }

    /*
    We subtract K from maxi to simulate the decreasing of each element by k

    We add K from mini to simulate the increasing of each element by k
    */
    int result = max(0, (maxi - k) - (mini + k)); // we want a positive number so if its negative it returns 0

    return result;
    }
};