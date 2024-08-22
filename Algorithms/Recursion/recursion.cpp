#include <iostream>
using namespace std;
/**
 * Recursion: Is a concept where a function calls itself, this technique is often used to break down a problem into smaller ones.
 * 
 * Key Concepts:
 * 
 * 1. Base Case: The condition where the recursive function stops calling itself, this is needed or the function would continue calling itself indefinitely.
 * 
 * 2. Recursive Case: The part of the function where the function calls itself with a modified arguement, aiming to approach the base case.
 * 
 * 3. Call Stack: When a function is called, the system stores information about the function call on a call stack. This includes details like local variables and the return address.
 *    Each recursive call adds a new layer to this stack, and when the base case is reached, the functions begin to return, unwinding the stack.
 * 
 * 4. Stack Overflow: If the recursion is too deep(to many calls are added to the stack), it will cause stack overflow.
 * 
 */
int recursive(int n){
    // Base Case
    if(n == 0){
        return 1;
    }
    // Recursive Case
    cout << "Calls Recursive(" << n - 1 << ")" << '\n';
    return recursive(n - 1);
}


int main(){
    
    recursive(10); 

    return 0;
}

/**
 *  Breakdown of the Call Stack:
 * 
 *  When recursive(10) is called, the following sequence of events occurs:
 * 
 *  1. recursive(10) is called, n = 10.
 *     - The function prints `9`.
 *     - The function calls recursive(9).
 * 
 *  2. recursive(9) is called, n = 9.
 *     - The function prints `8`.
 *     - The function calls recursive(8).
 * 
 *  3. recursive(8) is called, n = 8.
 *     - The function prints `7`.
 *     - The function calls recursive(7).
 * 
 *  ...
 * 
 *  9. recursive(1) is called, n = 1.
 *     - The function prints `0`.
 *     - The function calls recursive(0).
 * 
 *  10. recursive(0) is called, n = 0.
 *      - This is the base case, so the function returns `1`.
 * 
 *  11. Each recursive call now returns in reverse order, unwinding the stack:
 *      - recursive(1) returns 1.
 *      - recursive(2) returns 1.
 *      - ...
 *      - recursive(10) returns 1.
 * 
 *  The call stack grows until the base case is reached, then it unwinds as each function returns its result.
 * 
 *  Final Output:
 *  The program will print the numbers from 9 down to 0.
 * 
 */