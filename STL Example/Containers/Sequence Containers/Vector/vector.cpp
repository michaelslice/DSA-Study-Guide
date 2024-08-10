#include <iostream>
#include <vector>

// Vector: Dynamic array allows fast random access 
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vec.push_back(6);

    for(int i: vec) {
        std::cout << vec[i];
    }
    return 0;
};