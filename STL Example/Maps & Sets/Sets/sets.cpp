#include <iostream>
#include <set>

/**
 * Set: Stores unique elements in sorted order.
 * 
 * insert: Adds an element to the set. If the element already exists, it is not added again.
 * find: Searches for an element in the set and returns an iterator to it. If not found, returns end().
 * erase: Removes elements from the set by value or iterator.
 * size: Returns the number of elements in the set.
 * empty: Checks if the set is empty. Returns true if it contains no elements.
 * clear: Removes all elements from the set, leaving it empty.
 * begin: Returns an iterator to the first element in the set.
 * end: Returns an iterator to the position past the last element in the set.
 * count: Returns the number of elements matching a specified value (usually 0 or 1 for set).
 * 
 */
int main() {
    std::set<int> set1 = {1, 2, 3, 4};  // Initialize a set with elements 1, 2, 3, 4
    set1.insert(5);  // Adds 5 to the set

    for(int i: set1) {
        std::cout << i << '\n';  // Output elements in sorted order: 1 2 3 4 5
    }

    return 0;
}
