#include <iostream>
#include <queue>

/**
 *  Priority Queue: Is a queue but the highest values will appear first in the queue
 *  lower values have lower priority
 * 
 */
int main() {
    std::priority_queue<int> pq;  // Create a priority queue of integers

    pq.push(5);  // Add 5 to the priority queue
    pq.push(1);  // Add 1 to the priority queue
    pq.push(10); // Add 10 to the priority queue

    while (!pq.empty()) {
        std::cout << pq.top() << " ";  // Output: 10 5 1 (elements in decreasing order of priority)
        pq.pop();                      // Remove the element with the highest priority
    }

    return 0;
}
/**
 * Priority Queue: A container adaptor that provides constant-time access to the largest (or smallest) element.
 * 
 * push: Adds an element to the priority queue. The element is placed in a position such that the priority queue maintains its order.
 * pop: Removes the element with the highest priority (top element). The next highest priority element is then moved to the top.
 * top: Accesses the element with the highest priority without removing it.
 * size: Returns the number of elements in the priority queue.
 * empty: Checks if the priority queue is empty. Returns true if it contains no elements.
 * 
 */
