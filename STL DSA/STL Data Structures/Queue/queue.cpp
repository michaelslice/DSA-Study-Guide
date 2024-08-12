#include <iostream>
#include <queue>

/**
 *  Queue: Is first in first out data structure
 */
int main() {
    std::queue<int> q;
    q.push(1);  // Adds 1 to the queue
    q.push(2);  // Adds 2 to the queue
    q.push(3);  // Adds 3 to the queue

    while (!q.empty()) {
        std::cout << q.front() << " "; // Output: 1 2 3
        q.pop();  // Removes the front element
    }
    return 0;
}
/**
 *  Queue: A queue is a data structure that follows the First In, First Out (FIFO) principle.
 * 
 *  push: Adds an element to the back of the queue.
 *  pop: Removes the front element from the queue.
 *  front: Returns the front element of the queue without removing it.
 *  back: Returns the last element of the queue without removing it.
 *  size: Returns the number of elements in the queue.
 *  empty: Checks whether the queue is empty or not. Returns true if empty, false otherwise.
 * 
 */