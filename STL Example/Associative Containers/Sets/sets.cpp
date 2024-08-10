#include <iostream>
#include <set>

// Stores unique elements in sorted order
int main() {

    std::set<int> set1 = {1, 2, 3, 4};
    set1.insert(5);

    for(int i: set1) {
        std::cout << i << '\n';
    }

    return 0;
}