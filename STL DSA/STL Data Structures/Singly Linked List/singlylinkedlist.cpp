#include <iostream>
#include <forward_list>
using namespace std;

/**
 * std::forward_list: Is a singly linked list which means it only allows traversal in one direction(forward)
 * 
 * 
 */
int main() {

    std::forward_list<int> flist = {10, 20, 30 ,40, 50};

    // Insert elements at the front 
    flist.push_front(60);
    flist.push_front(70);
    flist.push_front(80);

    for(auto num: flist) {
        cout << num << '\n';
    }

    // Erase element after a specific postion(after first element)
    auto it = flist.begin();
    flist.erase_after(it);

    // Removing a specific element
    flist.remove(30);

    return 0;
}
/**
 * 
 * push_front: Adds elements to the front of the list
 * 
 * insert_after: Insert elements after a specific position 
 * 
 * erase:after: Removes elements after a specific position
 * 
 * remove: Removes all occurances of a specific value from the list
 * 
 */