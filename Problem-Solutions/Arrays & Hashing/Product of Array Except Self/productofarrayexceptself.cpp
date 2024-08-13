#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <map>
#include <list>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3 ,4};
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

    cout << "Elements in Answer" << '\n';
    for(auto num: ans) {
        cout << num << '\n';
    }

    return 0;
}

