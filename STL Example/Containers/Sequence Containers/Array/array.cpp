#include <iostream>
#include <array>

// Array: Static array with fixed size, introduced in C++11.
int main() {
    std::array<int, 4> array = {1, 2, 3, 4};

    array[1] = 10;

    for(auto i: array) {
        std::cout << i;
    }

    return 0;
}