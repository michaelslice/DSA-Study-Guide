#include <iostream>
#include <list>

/**
 *  std::list: Doubly linked list, which allows fast insertions and deletions anywhere in the list but no random access
 * 
 *  Time Complexity of Operations
 * 
 *  O(n): Initialization, insert, erase, clear
 * 
 *  O(1): push_front, push_back, pop_front, pop_back, size, empty, front, back, begin, end, rbegin, rend, emplace_front, emplace_back
 * 
 */
int main() {
    std::list<int> list = {1, 2, 3, 4};

    //  push_back: Adds an element to the end of the list.
    list.push_back(0);     

    // push_front: Adds an element to the front of the list.
    list.push_front(1);     

    // pop_back: Removes the last element from the list.
    list.pop_back();       

    // pop_front: Removes the first element from the list.
    list.pop_front();       

    // insert: Inserts elements at a specified position in the list.
    list.insert(list.begin(), 5); 
    
    // erase: Removes elements from the list at a specified position or range.
    list.erase(list.begin());      

    // empty: Checks if the list is empty. Returns true if empty, false otherwise.
    bool isEmpty = list.empty(); 
    
    list = {1, 2, 2, 3, 3, 4};
    
    // unique: Removes consecutive duplicate elements from the list.
    list.unique();       
    
    // reverse: Reverses the order of the elements in the list.
    list.reverse();         
    
    // size: Returns the number of elements in the list.
    list.size();

    // clear: Removes all elements from the list, leaving it empty.
    list.clear();           
    
    // front: Returns a reference to the first element in the list.
    auto it = list.front();

    // back: Returns a reference to the last element in the list.
    auto it = list.back();

    //  begin: Returns an iterator pointing to the first element of the list.
    auto it = list.begin();

    // end: Returns an iterator pointing to the element past the last element of the list.
    auto it = list.end();

    // rbegin: Returns a reverse iterator pointing to the last element in the list.
    auto it = list.rbegin();

    //  rend: Returns a reverse iterator pointing to the element before the first element in the list.
    auto it = list.rend();

    // sort: Sorts the elements of the list in ascending order (requires a comparison function or operator<).
    list.sort();

    // Sort the list in descending order
    list.sort(std::greater<int>());

    // merge: Merges two sorted lists into one. The original lists must be sorted.  
    std::list<int> list2 = {4, 5, 6, 8};
    list.merge(list2);

    // splice: Transfers elements from one list to another at a specified position.
    std::list<int> list4 = {1, 2, 3}; 
    std::list<int> list5 = {4, 5, 6};
    auto it1 = list4.begin();
    std::advance(it1, 2);
    list4.splice(it1, list5);

    // remove: Removes all elements equal to a specified value from the list.
    list.remove(2);

    list.remove_if(isOdd);

    return 0;
}

bool isOdd(int n) {
    return n % 2 != 0;
}

/**
 * 
 *  emplace_back: Constructs and adds an element to the end of the list.
 *  emplace_front: Constructs and adds an element to the front of the list.
 *  emplace: Constructs and inserts an element at a specified position in the list.
 */