#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>


using namespace std;
int main() {
    
    map<int, int> my_map;
    vector<int> nums = {4,1,-1,2,-1,2,3};

    for(auto num: nums) {
        int count = std::count(nums.begin(), nums.end(), num);
        my_map.insert({num, count}); 
    }

    cout << "Key-Value Pair in Map" << '\n';
    for(auto num: my_map) {
        cout << "Key " << num.first << " " << "Value " << num.second << '\n';
    }

    int k = 2;
    int j = 0;
    vector<int> ans;
    vector<pair<int, int>> pair_vec;

    for(auto num: my_map) {        
        auto element = make_pair(num.first, num.second);
        pair_vec.push_back(element);
    }

    sort(pair_vec.begin(), pair_vec.end(), [](auto &left, auto&right) {
        return left.second > right.second;
    });

    cout << "Elements in Vector" << '\n';
    for(auto num: pair_vec) {
        cout << num.first << " " << num.second << '\n';
    }

    for(auto num: pair_vec) {
        if (j < k) {
            ans.push_back(num.first);
            j++;
        } else {
            break;
        }
    }

    cout << "Final Answer" << '\n';
    for(auto num: ans) {
        cout << num << '\n';
    }

    return 0;
};