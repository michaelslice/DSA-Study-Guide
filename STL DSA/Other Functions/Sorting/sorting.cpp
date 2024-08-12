#include <iostream>
#include <algorithm>
#include <vector>

/**
 *  begin(): Returns an iterator pointing to the first element of the vector.
 *  end(): Returns an iterator pointing to the element past the last element of the vector.
 *  sort: Sorts the elements in the range specified by the iterators. By default, it sorts in ascending order.
 *  binary_search: Performs a binary search on the sorted range specified by the iterators to determine if a value is present. Returns true if found, false otherwise.
 *  
 */
int main() {
    
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};  // Initialize a vector with elements 1, 2, 3, 4, 5, 6

    std::sort(vec.begin(), vec.end());  // Sort the vector in ascending order

    bool found = std::binary_search(vec.begin(), vec.end(), 3);  // Check if 3 is present in the vector using binary search

    return 0;
}
