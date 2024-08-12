#include <iostream>
#include <array>

/** 
 * Array: Static array with fixed size
 * 
 * Time Complexity of Operations
 * 
 * O(n): Iterating over the array with a loop
 * 
 * O(1): Array initialization, element assignment, size retrieval, acessing elements, accessing front or back element
 * 
 */
int main() {
    std::array<int, 4> array = {1, 2, 3, 4};  // Initialize a static array with 4 elements: 1, 2, 3, 4

    array[1] = 10;  // Modify the element at index 1 to 10

    for(auto i: array) {
        std::cout << i << '\n';  // Output: 1 10 3 4
    }

    // size: Returns the number of elements in the array.
    std::cout << "The array is size " << array.size() << '\n';

    // at: Provides access to the element at a specified position with bounds checking. Throws an exception if out of bounds.
    std::cout << "The element at index 1 is " << array.at(1) << '\n';

    // front: Returns a reference to the first element in the array.
    std::cout << "The element at the front is " << array.front() << '\n';

    // back: Returns a reference to the last element in the array.
    std::cout << "The element at the back is " << array.back() << '\n';

    // fill: Assigns a value to all elements in the array.
    std::cout << "After filling the array with 0" << '\n';
    std::fill(array.begin(), array.end(), 0);
    for(auto i: array) {
        std::cout << i << '\n';  
    }

    // swap: Exchanges the contents of the array with another array of the same type and size.
    std::array<int, 4> array2 = {1, 2, 3, 4};
    std::swap(array, array2);
    std::cout << "After swapping array with array2" << '\n';
    for(auto i: array) {
        std::cout << i << '\n';  
    }

    return 0;
}