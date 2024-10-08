#include <iostream>
#include <queue>

/**
 *  Queue: A queue is a data structure that follows the First In, First Out (FIFO) principle.
 * 
 *  Time Complexity of Operations
 * 
 *  O(1): Push, front, pop, back, size, empty 
 * 
 *  Space Complexity
 * 
 *  O(n): The space complexity is proportional to the amount of elements in the set
 * 
 */
int main() {
    std::queue<int> q;
    
    // push: Adds an element to the back of the queue.
    q.push(1);  // Adds 1 to the queue
    q.push(2);  // Adds 2 to the queue
    q.push(3);  // Adds 3 to the queue

    // front: Returns the front element of the queue without removing it.
    q.front();

    // pop: Removes the front element from the queue.
    q.pop();

    // back: Returns the last element of the queue without removing it.
    q.back();

    // size: Returns the number of elements in the queue.
    q.size();

    // empty: Checks whether the queue is empty or not. Returns true if empty, false otherwise.
    while (!q.empty()) {
        std::cout << q.front() << " "; // Output: 1 2 3
        q.pop();  
    }
    return 0;
}