#include <iostream>
#include <unordered_map>

using namespace std;
/**
 *  Unordered_map: Does not gurantee any specific order
 * 
 * 
 * 
 * 
 */
int main() {
    // How to create key value pairs in a map
    unordered_map<string, int> test;

    // Inserting elements into a map
    test["kiwi"] = 2; // Using index operator
    test.insert({"banana", 1});
    test.insert({"apple", 2});
    test.insert({"strawberry", 3});
    test.insert({"pair", 4});
    test.insert({"orange", 5});

    // Iterating Through Elements
    cout << '\n' << "testing" << '\n' << '\n';
    for(auto& num: test) {
        std::cout << num.first << " " << num.second << '\n';
    }

    // Finding elements
    auto search = test.find("banana");

    // This works if the key exists in the array, before reaching the last element
    if(search != test.end()) {
        std::cout << "First Element: "<< search->first << " Second Element: " << search->second << '\n';
    }

    // Deleting Elements
    test.erase("banana"); // Delete the element with key banana

    // Checking Size
    std::cout << "Size of map is " << test.size() << '\n';

    // Clearing the Map
    test.clear(); // Delete all elements in map
    return 0;
}