#include <iostream>
#include <list>

/**
 *  std::list: Doubly linked list, which allows fast insertions and deletions anywhere in the list but no random access
 * 
 */
int main() {
    std::list<int> list = {1, 2, 3, 4};

    list.push_back(0);      // Adds 0 to the end of the list
    list.push_front(1);     // Adds 1 to the front of the list
    list.pop_back();        // Removes the last element (0)
    list.pop_front();       // Removes the first element (1)
    list.insert(list.begin(), 5);  // Inserts 5 at the beginning of the list
    list.erase(list.begin());      // Removes the first element (5)
    list.clear();            // Removes all elements from the list
    bool isEmpty = list.empty();  // Checks if the list is empty
    list = {1, 2, 2, 3, 3, 4};
    list.unique();           // Removes consecutive duplicates: list becomes {1, 2, 3, 4}
    list.reverse();          // Reverses the order of elements: list becomes {4, 3, 2, 1}
    
    // Further operations can be added here based on the above functions

    return 0;
}
/**
 *  push_back: Adds an element to the end of the list.
 *  push_front: Adds an element to the front of the list.
 *  pop_back: Removes the last element from the list.
 *  pop_front: Removes the first element from the list.
 *  insert: Inserts elements at a specified position in the list.
 *  erase: Removes elements from the list at a specified position or range.
 *  clear: Removes all elements from the list, leaving it empty.
 *  size: Returns the number of elements in the list.
 *  empty: Checks if the list is empty. Returns true if empty, false otherwise.
 *  front: Returns a reference to the first element in the list.
 *  back: Returns a reference to the last element in the list.
 *  begin: Returns an iterator pointing to the first element of the list.
 *  end: Returns an iterator pointing to the element past the last element of the list.
 *  rbegin: Returns a reverse iterator pointing to the last element in the list.
 *  rend: Returns a reverse iterator pointing to the element before the first element in the list.
 *  sort: Sorts the elements of the list in ascending order (requires a comparison function or operator<).
 *  reverse: Reverses the order of the elements in the list.
 *  merge: Merges two sorted lists into one. The original lists must be sorted.
 *  splice: Transfers elements from one list to another at a specified position.
 *  remove: Removes all elements equal to a specified value from the list.
 *  remove_if: Removes all elements that satisfy a specified condition.
 *  unique: Removes consecutive duplicate elements from the list.
 *  emplace_back: Constructs and adds an element to the end of the list.
 *  emplace_front: Constructs and adds an element to the front of the list.
 *  emplace: Constructs and inserts an element at a specified position in the list.
 */