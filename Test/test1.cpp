#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    for(auto ans: vec) {
        std::cout << ans;
    }


    return 0;
}