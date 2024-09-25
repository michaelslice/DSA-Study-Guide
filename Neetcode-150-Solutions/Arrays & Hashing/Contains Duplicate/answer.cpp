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
    bool containsDuplicate(vector<int>& nums) {

    std::sort(nums.begin(), nums.end());

    for(auto i{0}; i < nums.size() - 1; ++i) {
        if(nums[i] == nums[i + 1] ) {
            return true;
        }
    }
    return false;
    }
};