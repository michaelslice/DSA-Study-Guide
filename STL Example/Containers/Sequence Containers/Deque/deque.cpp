#include <iostream>
#include <deque>

// Deque: Double-ended queue, allows fast insertion and deletion at both ends.
int main() {
    std::deque<int> deque = {1, 2, 3, 4};

    deque.push_front(1);
    deque.push_back(1);

    for(auto i: deque) {
        std::cout << i;
    }

    return 0;
}