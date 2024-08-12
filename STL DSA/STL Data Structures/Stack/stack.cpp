#include <iostream>
#include <stack>

/**
 *  Stack: A stack is a data structure that follows the Last In, First Out (LIFO) principle.
 * 
 *  Time Complexity of Operations
 * 
 *  O(1): push, top, pop, size, empty
 * 
 */
int main() {
    std::stack<int> s;
    
    // push: Adds an element to the top of the stack.
    s.push(1);  
    s.push(2);  
    s.push(3); 

    // top: Returns the top element of the stack without removing it.
    s.top();

    // empty: Checks whether the stack is empty or not. Returns true if empty, false otherwise.
    while (!s.empty()) {
        std::cout << s.top() << " "; // Output: 3 2 1
        s.pop();  
    }

    // size: Returns the number of elements in the stack.
    s.size();

    // pop: Removes the top element from the stack.
    s.pop();

    return 0;
}