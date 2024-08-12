#include <iostream>
#include <vector>

/**
 *  Iterator: Is a object that allows you to traverse or iterate through the elements of a 
 *  container in a sequential manner. 
 * 
 *  begin(): Returns an iterator pointing to the first element of the vector.
 *  end(): Returns an iterator pointing to the element past the last element of the vector.
 *  iterator: A type that can iterate over the elements of the vector.
 *  *it: Dereferences the iterator to access the element it points to.
 * 
 */
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5}; // Initialize vector with elements 1, 2, 3, 4, 5
    std::vector<int>::iterator it; // Declare an iterator for the vector

    for (it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " "; // Output: 1 2 3 4 5
    }
    return 0;
}
