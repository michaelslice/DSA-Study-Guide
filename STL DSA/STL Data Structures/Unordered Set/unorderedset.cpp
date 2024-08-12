#include <iostream>
#include <unordered_set>
#include <utility> 
#include <typeinfo>

/** 
 * Unordered Set: Stores unique elements with no specific order, it is implemented as a hash table, where each
 * element's key is hashed to determine its position within the container. 
 * 
 * Time Complexity of Operations
 * 
 * O(n): clear, rehash, reserve, equal_range
 * 
 * O(1): insert, erase, find, count, size, empty, begin, end, bucket_count, load_factor, hash_function, key_eq
 *  
 */
int main() {
    std::unordered_set<int> set1 = {1, 2, 3, 4};  // Initialize an unordered set with elements 1, 2, 3, 4
    
    // Output elements (order is not guaranteed)
    std::cout << "Initial set elements:\n";
    for (auto i : set1) {
        std::cout << i << '\n';
    }

    // insert: Adds elements to the unordered set. Duplicates are ignored.
    set1.insert(5);  // Adds 5 to the set
    set1.insert(3);  // 3 is already in the set, so no change

    // erase: Removes elements from the unordered set based on value.
    set1.erase(2);  // Removes 2 from the set

    // find: Searches for an element in the unordered set and returns an iterator to it. If not found, returns end().
    auto it = set1.find(4);
    if (it != set1.end()) {
        std::cout << "Found element 4 in the set\n";
    } else {
        std::cout << "Element 4 not found in the set\n";
    }

    // count: Returns the number of elements matching a specified value (usually 0 or 1 for unordered_set).
    int count = set1.count(5);
    std::cout << "Count of element 5: " << count << '\n';

    // size: Returns the number of elements in the unordered set.
    std::cout << "Size of set: " << set1.size() << '\n';

    // empty: Checks if the unordered set is empty. Returns true if empty, false otherwise.
    std::cout << "Is the set empty? " << (set1.empty() ? "Yes" : "No") << '\n';

    // clear: Removes all elements from the unordered set, leaving it empty.
    set1.clear();
    std::cout << "Size after clear: " << set1.size() << '\n';

    // begin: Returns an iterator to the first element in the unordered set.
    set1 = {1, 2, 3};
    auto begin = set1.begin();
    std::cout << "First element: " << *begin << '\n';

    // end: Returns an iterator to the position past the last element in the unordered set.
    auto end = set1.end();

    // bucket_count: Returns the number of buckets used in the internal hash table of the set.
    std::cout << "Bucket count: " << set1.bucket_count() << '\n';

    // load_factor: Returns the average number of elements per bucket.
    std::cout << "Load factor: " << set1.load_factor() << '\n';

    // rehash: Changes the number of buckets to a specified number.
    set1.rehash(10);  // Resizes the hash table to have at least 10 buckets.
    std::cout << "Bucket count after rehash: " << set1.bucket_count() << '\n';

    // reserve: Increases the number of buckets to at least a specified number to improve performance.
    set1.reserve(20);  // Ensures at least 20 buckets are available.
    std::cout << "Bucket count after reserve: " << set1.bucket_count() << '\n';

    // equal_range: Returns a pair of iterators representing the range of elements matching a specified value.
    auto range = set1.equal_range(1);
    std::cout << "Range for element 1: " 
              << (range.first != set1.end() ? *range.first : -1) << " to "
              << (range.second != set1.end() ? *range.second : -1) << '\n';

    // hash_function: Returns the hash function used by the unordered set.
    typeid(set1.hash_function()).name();

    // key_eq: Returns the function used to compare keys for equality.
    typeid(set1.key_eq()).name();

    return 0;
}
