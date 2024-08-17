#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
using namespace std;

/**
 * Binary-Search: Is an efficient algorithm for finding an item from a sorted list. It works by 
 * repeatedly dividing the search interval in half
 * 
 * Summary: Efficiently finds an element in a sorted array by repeatedly halving the search space
 * 
 * How it Works:
 * 
 * 1. Start with the middle element of the sorted array
 * 
 * 2. If the middle element matches the target, return its index
 * 
 * 3. If the target is less than the middle element, search the left half of the array
 * 
 * 4. If the target is greater, search the right half
 * 
 * 5. Repeat the process on the half of the array where the target must be until the target is found 
 *    or the search space is empty
 */
int binarySearch(const vector<int>& vec, int target) {
    int left{0};
    int right = vec.size() - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(vec[mid] == target) {
            return mid; // Target found at index mid
        } else if(vec[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1;
}

// Testing binarySearch
int main() {

    vector<int> vec = {1, 3, 5, 7, 9, 11, 13, 15};

    int target{7};

    int index = binarySearch(vec, target);

    if(index == -1) {
        cout << "Element not found at index" << '\n';
    } else {
        cout << "Element found at index " << index << '\n';
    }

    return 0;
}