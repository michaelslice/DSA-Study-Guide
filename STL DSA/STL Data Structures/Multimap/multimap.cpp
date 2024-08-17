#include <iostream>
#include <map>

/** 
 * Multimap: Stores key-value pairs in sorted order by keys, and is implemented as a balanced binary search tree
 * duplicate keys are allowed in a multi map
 * 
 * Key Characteristics
 * 
 * Elements are sorted by key
 * Keys are not unique(multiple elements can have the same key)
 * 
 * Time Complexity of Operations
 * 
 * O(1): Initialization, size, end ,empty
 * 
 * O(n): Clear
 * 
 * O(log n): Insert, find, lower_bound, upper_bound, begin
 *  
 * O(log n + k): Count, erase, equal_range
 * 
 * Space Complexity
 * 
 * O(n): The space complexity is proportional to the amount of elements in the multi map
 * 
 */
int main() {
    std::multimap<char, int> mm;  // Create a multimap with char keys and int values
    
    // insert: Adds key-value pairs to the multimap. Allows duplicate keys; each key can be associated with multiple values.
    mm.insert({'a', 1});  
    mm.insert({'b', 2});  
    mm.insert({'a', 3});  

    for (auto &p : mm) {
        std::cout << p.first << ": " << p.second << " " << '\n';  // Output key-value pairs: a: 1 a: 3 b: 2 (sorted by key)
    }

    // count: Returns the number of elements with a specified key. This can be more than 1 due to duplicate keys.
    // Operation: O(log n + k): Due to logarithmic search of the key, and then linear time O(k), to count all occurances
    auto total = mm.count('a');

    // find: Searches for a specified key and returns an iterator to one of its occurrences. If the key is not found, returns end().
    auto it = mm.find('a');

    // begin: Returns an iterator to the first element in the multimap.
    auto it = mm.begin();

    // end: Returns an iterator to the position past the last element in the multimap.
    auto it = mm.end();

    // empty: Checks if the multimap is empty. Returns true if it contains no elements.
    mm.empty();

    // size: Returns the number of key-value pairs in the multimap.
    mm.size();

    // erase: Removes elements from the multimap either by key or iterator. Can remove all elements with a specific key or a specific occurrence.
    // Operation: O(log n + k): Due to logarithmic search of the first key, and then finding every other key
    mm.erase('a');

    // clear: Removes all key-value pairs from the multimap, leaving it empty.
    mm.clear();

    return 0;
}
/**
 *  
 *  equal_range: Returns a pair of iterators defining the range of elements that match a specified key.
 *  lower_bound: Returns an iterator to the first element not less than a specified key.
 *  upper_bound: Returns an iterator to the first element greater than a specified key.
 */
