#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

    map<int, int> my_map;
    int j = 0;
    vector<int> ans;
    vector<pair<int, int>> pair_vec;
    
    for(auto num: nums) {
        int total = count(nums.begin(), nums.end(), num);
        my_map.insert({num, total}); 
    }

    for(auto num: my_map) {        
        auto element = make_pair(num.first, num.second);
        pair_vec.push_back(element);
    }

    sort(pair_vec.begin(), pair_vec.end(), [](auto &left, auto&right) {
        return left.second > right.second;
    });

    for(auto num: pair_vec) {
        if (j < k) {
            ans.push_back(num.first);
            j++;
        } else {
            break;
        }
    }
    
    return ans;
    }
};