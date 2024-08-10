#include <iostream>
#include <unordered_map>

// Unordered Set: Stores unique elements with fast access but no specific order
int main() {
    std::unordered_map<char, int> unordered_map1;

    unordered_map1['a'] = 1;
    unordered_map1['b'] = 2;
    unordered_map1['c'] = 3;

    for(auto &i: unordered_map1) {
        std::cout << i.first << " " << i.second << '\n';
    }
    return 0;
}