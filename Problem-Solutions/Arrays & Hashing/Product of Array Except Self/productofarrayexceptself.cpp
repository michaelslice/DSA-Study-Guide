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
    /* 
    1. Traverse through array

    2. Right Product 
    */

    vector<int> left;
    vector<int> right;

    for(int i{0}; i < nums.size(); ++i) {
        left.push_back(nums[i]);

    }

    cout << "Elements in left" << '\n';
    for(auto num: left) {
        cout << num << '\n';
    }


    }
};

