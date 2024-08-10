#include <iostream>
#include <map>

// Multimap: Stores sorted key-value pairs, allows duplicate keys.
int main() {
    std::multimap<char, int> mm;
    mm.insert({'a', 1});
    mm.insert({'b', 2});
    mm.insert({'a', 3});

    for (auto &p : mm) {
        std::cout << p.first << ": " << p.second << " "; // Output: a: 1 a: 3 b: 2
    }
    return 0;
}
