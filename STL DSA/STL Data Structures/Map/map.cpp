#include <iostream>
#include <map>

/**
 * Map: Stores key-value pairs in sorted order by keys, and is implemented as a balanced binary search tree
 * 
 * Order: The map is sorted by the value values in ascending order first ex: 1, 10, 20, 21, 40, 100, 1400, 2000
 * There are no duplicate keys, keys and their values will be updated with new values
 * 
 * Time Complexity of Operations
 * 
 * O(1): Initialization, size, end
 * 
 * O(n): Clear
 *  
 * O(log n): Element access, insertion, find, erase(by key), begin, count, 
 * 
 */
int main() {
    std::map<char, int> map;  // Create a map with char keys and int values

    // operator[]: Provides access to the value associated with a specified key. Inserts a default value if the key does not exist.
    map['a'] = 1; 
    map['b'] = 2;  
    map['c'] = 3;  

    for(auto &p : map) {
        std::cout << p.first << " " << p.second << '\n';  // Output each key-value pair in sorted order by key
    }

    // insert: Adds a key-value pair to the map. If the key already exists, the value is updated.
    map.insert({'d', 4});

    // find: Searches for a specified key and returns an iterator to it. If not found, returns end().
    auto search = map.find('d');

    // erase: Removes elements from the map by key or iterator. Can remove a specific key or all elements by iterator.

    // size: Returns the number of key-value pairs in the map.
    map.size();

    // begin: Returns an iterator to the first element in the map.
    auto it = map.begin();

    // end: Returns an iterator to the position past the last element in the map.
    auto it = map.end();

    // count: Returns the number of elements with a specified key (usually 0 or 1 for map).
    auto total = map.count('a');

    // clear: Removes all key-value pairs from the map, leaving it empty.
    map.clear();

    return 0;
}