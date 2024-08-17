#include <iostream>
#include <queue>

/**
 *  Priority Queue: Is a queue but the highest values will appear first in the queue
 *  lower values have lower priority, this is implemented as a max heap
 * 
 *  Time Complexity of Operations
 * 
 *  O(log n): Push, pop 
 * 
 *  O(1): Top, size, empty 
 * 
 *  Space Complexity
 * 
 *  O(n): The space complexity is proportional to the amount of elements in the set
 * 
 */
int main() {
    std::priority_queue<int> pq;  // Create a priority queue of integers

    // push: Adds an element to the priority queue. The element is placed in a position such that the priority queue maintains its order.
    pq.push(5);  // Add 5 to the priority queue
    pq.push(1);  // Add 1 to the priority queue
    pq.push(10); // Add 10 to the priority queue

    // top: Accesses the element with the highest priority without removing it.
    pq.top();

    // pop: Removes the element with the highest priority (top element). The next highest priority element is then moved to the top.
    pq.pop();

    // size: Returns the number of elements in the priority queue.
    pq.size();

    // empty: Checks if the priority queue is empty. Returns true if it contains no elements.
    while (!pq.empty()) {
        std::cout << pq.top() << " " << '\n';  // Output: 10 5 1 (elements in decreasing order of priority)
        pq.pop();                      
    }

    return 0;
}