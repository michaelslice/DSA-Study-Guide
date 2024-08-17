#include <iostream>
#include <set>

/**
 * Multiset: Stores sorted elements, allows duplicates, sorted by key
 * 
 * Key Characteristics
 * 
 * Elements are sorted
 * Elements can have duplicates(multiple elements can have the same value)
 * 
 * Time Complexity of Operations
 * 
 * O(n): Clear
 * 
 * O(1): Size, begin, end, empty
 * 
 * O(log n): Insert, find, count, equal_range, erase, lower_bound, upper_bound
 * 
 * Space Complexity
 * 
 * O(n): The space complexity is proportional to the amount of elements in the set
 * 
*/
int main() {
    std::multiset<int> ms = {3, 1, 4, 1, 5};  // Initialize a multiset with elements 3, 1, 4, 1, 5 (note: 1 is duplicated)
    // insert: Adds an element to the multiset. Allows duplicates; if the element already exists, it can be added again.
    ms.insert(1);  // Adds another 1 to the multiset

    for (int i : ms) {
        std::cout << i << " ";  // Output: 1 1 1 3 4 5 (elements in sorted order, including duplicates)
    }

    // find: Searches for an element and returns an iterator to it. If not found, returns end(). 
    auto it = ms.find(3);

    // count: Returns the number of occurrences of a specified value in the multiset. Can be more than 1 due to duplicates.
    auto total = ms.count(1);

    // size: Returns the number of elements in the multiset.
    int total = ms.size();

    // begin: Returns an iterator to the first element in the multiset.
    auto it = ms.begin();

    // end: Returns an iterator to the position past the last element in the multiset.
    auto it = ms.end();

    // empty: Checks if the multiset is empty. Returns true if it contains no elements.
    ms.empty();

    // clear: Removes all elements from the multiset, leaving it empty.
    ms.clear();

    return 0;
}
/**
 *  
 *  erase: Removes elements from the multiset by value or iterator. Can remove all occurrences of a value or a specific occurrence.
 *  equal_range: Returns a pair of iterators defining the range of elements that match a specified value.
 *  lower_bound: Returns an iterator to the first element not less than a specified value.
 *  upper_bound: Returns an iterator to the first element greater than a specified value.
 * 
 */
