#include <iostream>
#include <unordered_set>

// Unordered Set: Stores unique elements with fast access but no specific order

int main() {
    std::unordered_set<int> set1 = {1, 2, 3, 4};  // Initialize an unordered set with elements 1, 2, 3, 4

    for(auto i: set1) {
        std::cout << i << 'n';  // Output elements (order is not guaranteed)
    }
    return 0;
}
/**
 *  insert: Adds elements to the unordered set. Duplicates are ignored.
 *  erase: Removes elements from the unordered set based on value or position.
 *  find: Searches for an element in the unordered set and returns an iterator to it. If not found, returns end().
 *  count: Returns the number of elements matching a specified value (usually 0 or 1 for unordered_set).
 *  size: Returns the number of elements in the unordered set.
 *  empty: Checks if the unordered set is empty. Returns true if empty, false otherwise.
 *  clear: Removes all elements from the unordered set, leaving it empty.
 *  begin: Returns an iterator to the first element in the unordered set.
 *  end: Returns an iterator to the position past the last element in the unordered set.
 *  bucket_count: Returns the number of buckets in the unordered set.
 *  load_factor: Returns the average number of elements per bucket.
 *  rehash: Changes the number of buckets to a specified number, which can reduce the load factor.
 *  reserve: Increases the number of buckets to at least a specified number to improve performance.
 *  equal_range: Returns a pair of iterators representing the range of elements matching a specified value.
 *  hash_function: Returns the hash function used by the unordered set.
 *  key_eq: Returns the function used to compare keys for equality.
 */
