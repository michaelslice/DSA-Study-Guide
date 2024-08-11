#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

int main() {
    
    std::unordered_map<int, int> map;

    map.insert({1, 12});
    map.insert({1, 22});
    map.insert({2, 32});

    for(auto num : map) {
        std::cout << num.first << " "<< num.second << '\n';
    }
    return 0;
}