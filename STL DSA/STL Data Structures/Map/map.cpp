#include <iostream>
#include <map>

/**
 * Map: Is implemented as a balanced binary search tree
 * 
 * Order: The map is sorted by the value values in ascending order first ex: 1, 10, 20, 21, 40, 100, 1400, 2000
 * 
 * There are no duplicate keys, keys and their values will be updated with new values
 * 
 */
int main() {
    std::map<char, int> map;  // Create a map with char keys and int values

    map['a'] = 1;  // Add key-value pair ('a', 1) to the map
    map['b'] = 2;  // Add key-value pair ('b', 2) to the map
    map['c'] = 3;  // Add key-value pair ('c', 3) to the map

    for(auto &p : map) {
        std::cout << p.first << " " << p.second << '\n';  // Output each key-value pair in sorted order by key
    }

    return 0;
}
/**
 * Map: Stores key-value pairs in sorted order by keys.
 * 
 * insert: Adds a key-value pair to the map. If the key already exists, the value is updated.
 * find: Searches for a specified key and returns an iterator to it. If not found, returns end().
 * erase: Removes elements from the map by key or iterator. Can remove a specific key or all elements by iterator.
 * size: Returns the number of key-value pairs in the map.
 * clear: Removes all key-value pairs from the map, leaving it empty.
 * begin: Returns an iterator to the first element in the map.
 * end: Returns an iterator to the position past the last element in the map.
 * count: Returns the number of elements with a specified key (usually 0 or 1 for map).
 * operator[]: Provides access to the value associated with a specified key. Inserts a default value if the key does not exist.
 * 
 */