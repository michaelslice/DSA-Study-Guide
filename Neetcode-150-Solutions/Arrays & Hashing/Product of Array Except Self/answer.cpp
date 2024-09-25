#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <map>
#include <list>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    vector<int> ans;

    for(auto num: nums) {
        ans.push_back(num);
    }

    int prefix{1};
    for(int i{0}; i < nums.size(); ++i) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int postfix{1};
    int size = nums.size() - 1; 
    for(int j{size}; j >= 0; --j) {
        ans[j] *= postfix;
        postfix *= nums[j];
    }
    return ans;
    }
};