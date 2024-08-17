#include <iostream>
#include <forward_list>
using namespace std;

/**
 * std::forward_list: Is a singly linked list which means it only allows traversal in one direction(forward)
 * 
 * Time Complexity of Operations
 * 
 * O(n): remove
 * 
 * O(1): push_front, erase_after, insert_after
 * 
 * Space Complexity
 * 
 * O(n): The space complexity is proportional to the amount of elements in the set
 *  
 */
int main() {

    std::forward_list<int> flist = {10, 20, 30 ,40, 50};

    // push_front: Adds elements to the front of the list
    flist.push_front(60);
    flist.push_front(70);
    flist.push_front(80);

    for(auto num: flist) {
        cout << num << '\n';
    }

    // Erase element after a specific postion(after first element)
    auto it = flist.begin();
    // erase:after: Removes elements after a specific position
    flist.erase_after(it);

    // remove: Removes all occurances of a specific value from the list
    flist.remove(30);

    return 0;
}
/**
 * 
 * insert_after: Insert elements after a specific position 
 * 
 */