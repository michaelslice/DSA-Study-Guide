#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
using namespace std;


int main() {
    
    std::vector<int> vec = {1, 2, 3, 4, 5, 6 ,1, 10};
    
    map<int, int> map;

    for(int i{0}; i < vec.size(); ++i) {
        map.insert({i, vec[i]});
    }
    
    for(auto num: map) {
        std::cout << "Key: " << num.first << " Value: " << num.second << '\n';
    }
    cout << '\n';
    vector<int> vec1;
    for(auto num: map) {
        vec1.push_back(num.second);
    }

    int total = count(vec1.begin(), vec1.end(), 1);
    cout << "Total " << total << '\n'; 

    return 0;
}