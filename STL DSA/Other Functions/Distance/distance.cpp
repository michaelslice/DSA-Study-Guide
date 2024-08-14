#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Getting iterators to the beginning and end of the vector
    std::vector<int>::iterator first = vec.begin();
    std::vector<int>::iterator last = vec.end();

    // Calculating the distance
    std::cout << "Distance between first and last: " << std::distance(first, last) << std::endl;

    // Calculating the distance between the first element and the third element
    std::cout << "Distance between first and third: " << std::distance(first, first + 2) << std::endl;

    return 0;
}
