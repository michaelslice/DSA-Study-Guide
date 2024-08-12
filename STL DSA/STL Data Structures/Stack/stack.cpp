#include <iostream>
#include <stack>

/**
 * 
 */
int main() {
    std::stack<int> s;
    s.push(1);  // Adds 1 to the stack
    s.push(2);  // Adds 2 to the stack
    s.push(3);  // Adds 3 to the stack

    while (!s.empty()) {
        std::cout << s.top() << " "; // Output: 3 2 1
        s.pop();  // Removes the top element
    }
    return 0;
}
/**
 *  Stack: A stack is a data structure that follows the Last In, First Out (LIFO) principle.
 * 
 *  push: Adds an element to the top of the stack.
 *  pop: Removes the top element from the stack.
 *  top: Returns the top element of the stack without removing it.
 *  size: Returns the number of elements in the stack.
 *  empty: Checks whether the stack is empty or not. Returns true if empty, false otherwise.
 * 
 */