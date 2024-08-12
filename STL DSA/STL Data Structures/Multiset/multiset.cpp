#include <iostream>
#include <set>

/**
 * Multiset: Stores sorted elements, allows duplicates.
*/
int main() {
    std::multiset<int> ms = {3, 1, 4, 1, 5};  // Initialize a multiset with elements 3, 1, 4, 1, 5 (note: 1 is duplicated)
    ms.insert(1);  // Adds another 1 to the multiset

    for (int i : ms) {
        std::cout << i << " ";  // Output: 1 1 1 3 4 5 (elements in sorted order, including duplicates)
    }

    return 0;
}
/**
 *  insert: Adds an element to the multiset. Allows duplicates; if the element already exists, it can be added again.
 *  find: Searches for an element and returns an iterator to it. If not found, returns end().
 *  erase: Removes elements from the multiset by value or iterator. Can remove all occurrences of a value or a specific occurrence.
 *  size: Returns the number of elements in the multiset.
 *  empty: Checks if the multiset is empty. Returns true if it contains no elements.
 *  clear: Removes all elements from the multiset, leaving it empty.
 *  begin: Returns an iterator to the first element in the multiset.
 *  end: Returns an iterator to the position past the last element in the multiset.
 *  count: Returns the number of occurrences of a specified value in the multiset. Can be more than 1 due to duplicates.
 *  equal_range: Returns a pair of iterators defining the range of elements that match a specified value.
 *  lower_bound: Returns an iterator to the first element not less than a specified value.
 *  upper_bound: Returns an iterator to the first element greater than a specified value.
 *  bucket_count: Returns the number of buckets used in the internal hash table of the multiset (specific to unordered_multiset).
 *  load_factor: Returns the average number of elements per bucket (specific to unordered_multiset).
 *  rehash: Changes the number of buckets (specific to unordered_multiset).
 *  reserve: Increases the number of buckets to at least a specified number to improve performance (specific to unordered_multiset).
 *  hash_function: Returns the hash function used by the unordered multiset (specific to unordered_multiset).
 *  key_eq: Returns the function used to compare keys for equality (specific to unordered_multiset).
 */
