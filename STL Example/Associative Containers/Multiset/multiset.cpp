#include <iostream>
#include <set>

// Multiset: Stores sorted elements, allows duplicates.
int main() {
    std::multiset<int> ms = {3, 1, 4, 1, 5};
    ms.insert(1);

    for (int i : ms) {
        std::cout << i << " "; // Output: 1 1 1 3 4 5
    }
    return 0;
}
