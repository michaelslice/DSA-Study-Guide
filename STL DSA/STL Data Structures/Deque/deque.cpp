#include <iostream>
#include <deque>

/**
 *  Deque: Double-ended queue, allows fast insertion and deletion at both ends.
 * 
 *  Time Complexity of Operations
 * 
 *  O(n): Initialization, inserting, erase, clear
 * 
 *  O(1): push_front, push_back, pop_front, pop_back, size, empty, front, back, iterator operations
 * 
*/
int main() {
    std::deque<int> deque = {1, 2, 3, 4};  // Initialize a deque with elements 1, 2, 3, 4

    // push_front: Adds an element to the front of the deque.
    deque.push_front(10);  
        std::cout << "Adding 10 to the front of the deque" << '\n';
    for(auto i: deque) {
        std::cout << i << '\n';  
    }

    // push_back: Adds an element to the back of the deque.
    deque.push_back(20);   
    std::cout << "Adding 20 to the back of the deque" << '\n';
    for(auto i: deque) {
        std::cout << i << '\n';  
    }

    // pop_front: Removes the first element from the deque.
    deque.pop_front();   
    std::cout << "Removing the first element in the deque" << '\n';
    for(auto i: deque) {
        std::cout << i << '\n';  
    }

    //  pop_back: Removes the last element from the deque.
    deque.pop_back();   
    std::cout << "Removing the last element in the deque" << '\n';
    for(auto i: deque) {
        std::cout << i << '\n';  
    }

    // insert: Inserts elements at a specified position in the deque.
    deque.insert(deque.begin(), 100);
    std::cout << "Inserting at a specific position in the deque" << '\n';
    for(auto i: deque) {
        std::cout << i << '\n'; 
    }

    // erase: Removes elements from the deque at a specified position or range.
    deque.erase(deque.begin());
    std::cout << "Erasing a element at beginning in the deque" << '\n';
    for(auto i: deque) {
        std::cout << i << '\n'; 
    }

    // size: Returns the number of elements in the deque.
    int total = deque.size();
    std::cout << "There are " << total << " elements in the deque" << '\n';

    // empty: Checks if the deque is empty. Returns true if empty, false otherwise.
    bool emp = deque.empty();
    emp  == 0 ? std::cout << "The deque is not empty" : std::cout << "The deque is empty";

    // front: Returns a reference to the first element in the deque.
    std::cout << "The front element is " << deque.front() << '\n'; 

    // back: Returns a reference to the last element in the deque.
    std::cout << "The back element is " << deque.back() << '\n'; 

    // begin: Returns an iterator pointing to the first element of the deque.
    auto it = deque.begin();

    // end: Returns an iterator pointing to the element past the last element of the deque.
    auto it = deque.end();

    // rbegin: Returns a reverse iterator pointing to the last element in the deque.
    auto it = deque.rbegin();
 
    // rend: Returns a reverse iterator pointing to the element before the first element of the deque.
    auto it = deque.rend();


    // clear: Removes all elements from the deque, leaving it empty.
    deque.clear();

    return 0;
}
/**
 * 
 *  emplace_front: Constructs and adds an element to the front of the deque.
 *  emplace_back: Constructs and adds an element to the back of the deque.
 *  emplace: Constructs and inserts an element at a specified position in the deque.
 */