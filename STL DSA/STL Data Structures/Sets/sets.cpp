#include <iostream>
#include <set>

/**
 * Set: Stores unique elements in sorted order, and is implemented as red-black tree
 * 
 * Key Characteristics
 * 
 * Elements are sorted
 * All elements are unique
 * 
 * Time Complexity of Operations
 * 
 * O(n): Clear
 * 
 * O(1): Begin, end, size, empty
 * 
 * O(log n): Insert, find, count, erase
 * 
 */
int main() {
    std::set<int> set1 = {1, 2, 3, 4};  // Initialize a set with elements 1, 2, 3, 4
    
    // insert: Adds an element to the set. If the element already exists, it is not added again.
    set1.insert(5);  // Adds 5 to the set

    for(int i: set1) {
        std::cout << i << '\n';  // Output elements in sorted order: 1 2 3 4 5
    }

    // find: Searches for an element in the set and returns an iterator to it. If not found, returns end().
    auto it = set1.find(1);

    // count: Returns the number of elements matching a specified value (usually 0 or 1 for set).
    auto total = set1.count(1);

    // begin: Returns an iterator to the first element in the set.
    auto it1 = set1.begin();

    // end: Returns an iterator to the position past the last element in the set.
    auto it2 = set1.end();

    // size: Returns the number of elements in the set.
    set1.size();

    // empty: Checks if the set is empty. Returns true if it contains no elements.
    set1.empty();

    // erase: Removes elements from the set by value or iterator.
    set1.erase(1);

    // clear: Removes all elements from the set, leaving it empty.
    set1.clear();

    return 0;
}
