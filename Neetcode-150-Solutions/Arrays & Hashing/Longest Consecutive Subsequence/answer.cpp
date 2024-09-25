#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <unordered_set>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
    unordered_set<int> my_set(nums.begin(), nums.end());
    int count{0};

    // O(n)
    for(auto num: my_set) {
        // Check if num is start of sequence
        if(my_set.find(num - 1) == my_set.end()) {
            int length = 1;
            while(my_set.find(num + length) != my_set.end()) {
            length++;
        }
        count = max(count, length);
        } 
    }
    return count;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)