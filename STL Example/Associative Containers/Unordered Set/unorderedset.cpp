#include <iostream>
#include <unordered_set>

// Unordered Set: Stores unique elements with fast access but no specific order
int main() {
    std::unordered_set<int> set1 = {1, 2, 3, 4};

    for(auto i: set1) {
        std::cout << i << 'n';
    }
    return 0;
}