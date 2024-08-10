#include <iostream>
#include <map>

// Stores key-value pairs in sorted order by keys
int main() {
    std::map<char, int> map;

    map['a'] = 1;
    map['b'] = 2;
    map['c'] = 3;

    for(auto &p : map) {
        std::cout << p.first << " " << p.second << '\n';
    }
    return 0;
}