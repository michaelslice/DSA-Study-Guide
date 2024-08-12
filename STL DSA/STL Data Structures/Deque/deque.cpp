#include <iostream>
#include <deque>

/**
 *  Deque: Double-ended queue, allows fast insertion and deletion at both ends.
*/
int main() {
    std::deque<int> deque = {1, 2, 3, 4};  // Initialize a deque with elements 1, 2, 3, 4

    deque.push_front(1);  // Adds 1 to the front of the deque
    deque.push_back(1);   // Adds 1 to the back of the deque

    for(auto i: deque) {
        std::cout << i;  // Output: 1 1 2 3 4 1
    }

    return 0;
}
/**
 *  push_front: Adds an element to the front of the deque.
 *  push_back: Adds an element to the back of the deque.
 *  pop_front: Removes the first element from the deque.
 *  pop_back: Removes the last element from the deque.
 *  insert: Inserts elements at a specified position in the deque.
 *  erase: Removes elements from the deque at a specified position or range.
 *  clear: Removes all elements from the deque, leaving it empty.
 *  size: Returns the number of elements in the deque.
 *  empty: Checks if the deque is empty. Returns true if empty, false otherwise.
 *  front: Returns a reference to the first element in the deque.
 *  back: Returns a reference to the last element in the deque.
 *  begin: Returns an iterator pointing to the first element of the deque.
 *  end: Returns an iterator pointing to the element past the last element of the deque.
 *  rbegin: Returns a reverse iterator pointing to the last element in the deque.
 *  rend: Returns a reverse iterator pointing to the element before the first element of the deque.
 *  emplace_front: Constructs and adds an element to the front of the deque.
 *  emplace_back: Constructs and adds an element to the back of the deque.
 *  emplace: Constructs and inserts an element at a specified position in the deque.
 */