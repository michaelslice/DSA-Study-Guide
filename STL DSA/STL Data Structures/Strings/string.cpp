#include <iostream>
#include <string>
#include <cctype>

/**
 *  string: Is basically a array that just stores characters
 * 
 *  O(1): size, length, empty, c_str
 * 
 *  O(n): substr, compare, append
 *  
 *  O(n + k): insert, erase, replace, 
 * 
 *  O(n * m): find
 * 
 *  Space Complexity
 * 
 *  O(n): The space complexity is proportional to the amount of elements in the string
 * 
 */
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    
    // alnum: Checks if a element is alphanumeric
    std::alnum(12);

    // size: Returns the number of characters in the string.
    std::cout << "Size: " << str.size() << std::endl;  // Output: 13
    
    // length: Returns the number of characters in the string (equivalent to size()).
    std::cout << "Length: " << str.length() << std::endl;  // Output: 13

    // substr: Returns a substring of the string. Takes the starting position and length as arguments.
    std::string sub = str.substr(7, 5);  // "World"
    std::cout << "Substring: " << sub << std::endl;  // Output: World

    // find: Searches for a substring within the string and returns the position of the first occurrence. If not found, it returns `std::string::npos`.
    size_t pos = str.find("World");
    std::cout << "Position of 'World': " << pos << std::endl;  // Output: 7

    // compare: Compares two strings lexicographically. Returns 0 if equal, a negative value if less, and a positive value if greater.
    int cmp = str.compare("Hello, World!");
    std::cout << "Compare with 'Hello, World!': " << cmp << std::endl;  // Output: 0 (equal)

    // append: Adds characters to the end of the string.
    str.append(" How are you?");
    std::cout << "After append: " << str << std::endl;  // Output: Hello, World! How are you?

    // insert: Inserts characters into the string at a specified position.
    str.insert(7, "Beautiful ");
    std::cout << "After insert: " << str << std::endl;  // Output: Hello, Beautiful World! How are you?

    // erase: Removes characters from the string. Takes the starting position and length as arguments.
    str.erase(7, 10);  // Removes "Beautiful "
    std::cout << "After erase: " << str << std::endl;  // Output: Hello, World! How are you?

    // empty: Checks whether the string is empty. Returns true if empty, false otherwise.
    bool isEmpty = str.empty();
    std::cout << "Is the string empty? " << (isEmpty ? "Yes" : "No") << std::endl;  // Output: No

    // replace: Replaces a portion of the string with another string. Takes the starting position, length, and replacement string as arguments.
    str.replace(7, 5, "Universe");  // Replaces "World" with "Universe"
    std::cout << "After replace: " << str << std::endl;  // Output: Hello, Universe! How are you?

    // c_str: Returns a C-style null-terminated character array equivalent to the string.
    const char* cstr = str.c_str();
    std::cout << "C-style string: " << cstr << std::endl;  // Output: Hello, Universe! How are you?

    return 0;
}