#include <iostream>
#include <vector>
#include <list>

// List: Doubly linked list, allows fast insertion and deletion.
int main() {
    std::list<int> list = {1, 2, 3, 4};

    list.push_back(0);
    list.push_front(1);

    for(int i: list) {
        std::cout << i;
    }
    return 0;
};