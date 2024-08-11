#include <iostream>
#include <unordered_map>

// Unordered Map: Stores key-value pairs with fast access but no specific order.

int main() {
    std::unordered_map<char, int> unordered_map1;  // Create an unordered map with char keys and int values

    unordered_map1['a'] = 1;  // Add a key-value pair ('a', 1) to the map
    unordered_map1['b'] = 2;  // Add a key-value pair ('b', 2) to the map
    unordered_map1['c'] = 3;  // Add a key-value pair ('c', 3) to the map

    for(auto &i: unordered_map1) {
        std::cout << i.first << " " << i.second << '\n';  // Output each key-value pair
    }

    return 0;
}
/**
 *  insert: Adds key-value pairs to the unordered map. If the key already exists, the value is updated.
 *  erase: Removes elements from the unordered map by key or iterator.
 *  find: Searches for a key in the unordered map and returns an iterator to it. If not found, returns end().
 *  count: Returns the number of elements with a specified key (usually 0 or 1 for unordered_map).
 *  size: Returns the number of key-value pairs in the unordered map.
 *  empty: Checks if the unordered map is empty. Returns true if it contains no elements.
 *  clear: Removes all elements from the unordered map, leaving it empty.
 *  begin: Returns an iterator to the first element in the unordered map.
 *  end: Returns an iterator to the position past the last element in the unordered map.
 *  bucket_count: Returns the number of buckets used in the internal hash table of the map.
 *  load_factor: Returns the average number of elements per bucket.
 *  rehash: Changes the number of buckets to a specified number, which can reduce the load factor.
 *  reserve: Increases the number of buckets to at least a specified number to improve performance.
 *  equal_range: Returns a pair of iterators representing the range of elements matching a specified key.
 *  hash_function: Returns the hash function used by the unordered map.
 *  key_eq: Returns the function used to compare keys for equality.
 */
