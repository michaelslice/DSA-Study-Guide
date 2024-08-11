#include <iostream>
#include <vector>

/**
 * Vector: Dynamic array allows fast random access.
 * Functions:
 * 
 * push_back: Adds an element to the end of the vector.
 * pop_back: Removes the last element from the vector.
 * size: Returns the number of elements in the vector.
 * clear: Removes all elements from the vector, leaving it empty.
 * begin: Returns an iterator pointing to the first element of the vector.
 * end: Returns an iterator pointing to the element past the last element of the vector.
 * insert: Inserts elements at a specified position in the vector.
 * erase: Removes elements from the vector at a specified position or range.
 * resize: Changes the size of the vector. If the new size is greater, new elements are default-initialized.
 * empty: Checks if the vector is empty. Returns true if empty, false otherwise.
 * 
 */
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Initialize a vector with elements 1 through 10

    vec.push_back(6);  // Adds 6 to the end of the vector

    for(int i: vec) {
        std::cout << i;  // Output: 12345678910
    }

    return 0;
}