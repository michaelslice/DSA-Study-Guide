#include <iostream>
#include <array>

/** Array: Static array with fixed size
 */
int main() {
    std::array<int, 4> array = {1, 2, 3, 4};  // Initialize a static array with 4 elements: 1, 2, 3, 4

    array[1] = 10;  // Modify the element at index 1 to 10

    for(auto i: array) {
        std::cout << i;  // Output: 1 10 3 4
    }

    return 0;
}
/**
 *  size: Returns the number of elements in the array.
 *  at: Provides access to the element at a specified position with bounds checking. Throws an exception if out of bounds.
 *  operator[]: Provides access to the element at a specified position without bounds checking.
 *  front: Returns a reference to the first element in the array.
 *  back: Returns a reference to the last element in the array.
 *  data: Returns a pointer to the underlying array serving as the storage for the `std::array`.
 *  fill: Assigns a value to all elements in the array.
 *  swap: Exchanges the contents of the array with another array of the same type and size.
 */
