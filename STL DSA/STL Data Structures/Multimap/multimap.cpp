#include <iostream>
#include <map>

/** 
 * Multimap: Stores sorted key-value pairs, allows duplicate keys.
 */
int main() {
    std::multimap<char, int> mm;  // Create a multimap with char keys and int values
    mm.insert({'a', 1});  // Add key-value pair ('a', 1) to the multimap
    mm.insert({'b', 2});  // Add key-value pair ('b', 2) to the multimap
    mm.insert({'a', 3});  // Add another key-value pair ('a', 3) with duplicate key 'a'

    for (auto &p : mm) {
        std::cout << p.first << ": " << p.second << " ";  // Output key-value pairs: a: 1 a: 3 b: 2 (sorted by key)
    }

    return 0;
}
/**
 *  insert: Adds key-value pairs to the multimap. Allows duplicate keys; each key can be associated with multiple values.
 *  find: Searches for a specified key and returns an iterator to one of its occurrences. If the key is not found, returns end().
 *  erase: Removes elements from the multimap either by key or iterator. Can remove all elements with a specific key or a specific occurrence.
 *  size: Returns the number of key-value pairs in the multimap.
 *  empty: Checks if the multimap is empty. Returns true if it contains no elements.
 *  clear: Removes all key-value pairs from the multimap, leaving it empty.
 *  begin: Returns an iterator to the first element in the multimap.
 *  end: Returns an iterator to the position past the last element in the multimap.
 *  count: Returns the number of elements with a specified key. This can be more than 1 due to duplicate keys.
 *  equal_range: Returns a pair of iterators defining the range of elements that match a specified key.
 *  lower_bound: Returns an iterator to the first element not less than a specified key.
 *  upper_bound: Returns an iterator to the first element greater than a specified key.
 */
