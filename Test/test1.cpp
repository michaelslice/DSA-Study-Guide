#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>


using namespace std;
int main() {
    
    priority_queue<int> pq;
    map<int, int> my_map;
    vector<int> nums = {4,1,-1,2,-1,2,3};

    for(auto num: nums) {
        int count = std::count(nums.begin(), nums.end(), num);
        my_map.insert({num, count}); // Keep updating the number with its count
    }

    cout << "Key-Value Pair in Map" << '\n';
    for(auto num: my_map) {
        cout << "Key " << num.first << " " << "Value " << num.second << '\n';
    }

    int k = 2;
    int j = 0;
    vector<int> ans;
    
    
    cout << "Elements in Priority Queue" << '\n';
    for(auto num: my_map) {        
        pq.push(num.first);
        
        if(j < k) {
            ans.push_back(pq.top());
            j++;
        }
        cout << pq.top() << '\n';        
    }

    cout << "Elements in Vector" << '\n';
    for(auto num: ans) {
        cout << num << '\n';
    }

    return 0;
}