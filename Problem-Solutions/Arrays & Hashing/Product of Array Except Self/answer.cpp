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

    }
};

// vector<int> nums = {1, 2, 3 ,4};
// vector<int> nums = {4,3,2,1,2};


int main() {

    // vector<int> nums = {1, 0};
    // vector<int> nums = {1, 2, 3 ,4};
    // vector<int> nums = {4,3,2,1,2};


    vector<int> left;
    vector<int> right;
    vector<int> ans;

    int prefix{1};
    for(int i{0}; i < nums.size(); ++i) {
        prefix *= nums[i];
        left.push_back(prefix);
    }

    int postfix{1};
    int size = nums.size() - 1; 
    for(int j{size}; j >= 0; --j) {
        postfix *= nums[j];
        right.push_back(postfix);
    }

    reverse(right.begin(), right.end());

    for(int i{0}; i < nums.size(); ++i) {      
        if(i == 0) {
            ans.push_back(1 * right[0]);
        } 
        else if (i == nums.size() - 1) {
            ans.push_back(left[i - 1] * 1);
        } 
        else {
            ans.push_back(left[i + 1] * right[i - 1]);
        }
    }

    cout << "Elements in Left" << '\n';
    for(auto num: left) {
        cout << num << '\n';
    }

    cout << "Elements in Right" << '\n';
    for(auto num: right) {
        cout << num << '\n';
    }

    cout << "Elements in Answer" << '\n';
    for(auto num: ans) {
        cout << num << '\n';
    }

    return 0;
}