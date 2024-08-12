#include <iostream>
#include <unordered_map>

/**
 *  Unordered Map: Stores key-value pairs with fast access but no specific order. 
 *  The key value pairs are not in any specific order, where as a regular map sorts keys in asending order
 *
 *  Elements are not sorted in any particular order, but organized into buckets. The bucket that the element is
 *  placed into depends entirely on the hash of its key. Keys with same hash code appear in the same bucket.
 *  Allowing for fast access to individual elements, since once the hash is computed, it refers to the exact bucket 
 *  the element is placed into.
 * 
 *  Two keys are considered equivalent if the map's key equality predicate returns true when passed those keys.
 *  If two keys are equivalent the hash function must return the same value for both keys.
 * 
 *  Time Complexity of Operations
 * 
 *  O(n): clear, rehash, reserve, equal_range
 * 
 *  O(1): insert, erase, find, count, size, empty, begin, end, bucket_count, load_factor, hash_function, key_eq
 *
*/ 
int main() {
    // Create an unordered map with char keys and int values
    std::unordered_map<char, int> map;

    // Insert key-value pairs
    map['a'] = 1;
    map['b'] = 2;
    map['c'] = 3;

    // Output all key-value pairs
    std::cout << "Initial map contents:\n";
    for (const auto &pair : map) {
        std::cout << pair.first << " " << pair.second << '\n';
    }

    // insert: Adds key-value pairs to the unordered map. If the key already exists, the value is updated.
    map.insert({'d', 4});
    std::cout << "\nAfter insert:\n";
    for (const auto &pair : map) {
        std::cout << pair.first << " " << pair.second << '\n';
    }

    // erase: Removes elements from the unordered map by key.
    map.erase('b');
    std::cout << "\nAfter erase ('b'):\n";
    for (const auto &pair : map) {
        std::cout << pair.first << " " << pair.second << '\n';
    }

    // find: Searches for a key in the unordered map and returns an iterator to it. If not found, returns end().
    auto it = map.find('c');
    if (it != map.end()) {
        std::cout << "\nFound 'c': " << it->second << '\n';
    } else {
        std::cout << "\nKey 'c' not found\n";
    }

    // count: Returns the number of elements with a specified key (usually 0 or 1 for unordered_map).
    int count = map.count('d');
    std::cout << "\nCount of 'd': " << count << '\n';

    // size: Returns the number of key-value pairs in the unordered map.
    std::cout << "\nSize of map: " << map.size() << '\n';

    // empty: Checks if the unordered map is empty. Returns true if it contains no elements.
    std::cout << "\nIs the map empty? " << (map.empty() ? "Yes" : "No") << '\n';

    // clear: Removes all elements from the unordered map, leaving it empty.
    map.clear();
    std::cout << "\nSize after clear: " << map.size() << '\n';

    // begin: Returns an iterator to the first element in the unordered map.
    map['x'] = 10;
    map['y'] = 20;
    auto begin = map.begin();
    std::cout << "\nFirst element: " << begin->first << " " << begin->second << '\n';

    // end: Returns an iterator to the position past the last element in the unordered map.
    auto end = map.end();

    // bucket_count: Returns the number of buckets used in the internal hash table of the map.
    std::cout << "\nBucket count: " << map.bucket_count() << '\n';

    // load_factor: Returns the average number of elements per bucket.
    std::cout << "\nLoad factor: " << map.load_factor() << '\n';

    // rehash: Changes the number of buckets to a specified number.
    map.rehash(20);  // Resizes the hash table to have at least 20 buckets.
    std::cout << "\nBucket count after rehash: " << map.bucket_count() << '\n';

    // reserve: Increases the number of buckets to at least a specified number to improve performance.
    map.reserve(30);  // Ensures at least 30 buckets are available.
    std::cout << "\nBucket count after reserve: " << map.bucket_count() << '\n';

    // equal_range: Returns a pair of iterators representing the range of elements matching a specified key.
    auto range = map.equal_range('x');
    std::cout << "\nRange for key 'x': ";
    if (range.first != map.end()) {
        std::cout << range.first->first << " " << range.first->second << " to ";
    } else {
        std::cout << "Not found";
    }
    if (range.second != map.end()) {
        std::cout << range.second->first << " " << range.second->second << '\n';
    } else {
        std::cout << "Not found";
    }

    // hash_function: Returns the hash function used by the unordered map.
    typeid(map.hash_function()).name();

    // key_eq: Returns the function used to compare keys for equality.
    typeid(map.key_eq()).name();

    return 0;
}