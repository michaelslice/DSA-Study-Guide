# DSA Study Guide

## Data Structures
- Arrays
- String
- Hashmap
- Queue
- Stack
- Linked-List
- Heap / Priority Queue
- Binary Tree
- Graphs

## Algorithms & Techniques
- Searching Algorithms
- Two Pointers
- Sliding Window
- Binary Search
- Recursion
- Divide and Conquer
- Greedy
- Backtracking
- Breadth-First-Search
- Depth-First-Search
- Dynamic Programming

# Time & Space Complexity
- Time Complexity: Time complexity measures the amount of time a function or algorithm takes to complete as a function of the size of the input. It gives an estimate of the running time and is typically expressed using Big O notation (e.g., O(n), O(log n)) to describe how the runtime grows as the input size increases.
- Space Complexity: Space complexity measures the amount of memory an algorithm uses in relation to the size of the input. Like time complexity, it is also expressed using Big O notation and helps to understand how the memory requirements grow with larger inputs.
![image](https://github.com/user-attachments/assets/d62fec8d-2a1b-4a14-be65-a403f23ed6fa) <br>
# Array
- Add or remove element at the end: O(1)
- Add or remove element from arbitrary index: O(n)
- Access or modify elements at an arbitray index: O(1)
- Check if element exists: O(n)
- Two Pointers: O(n * k), where k is the work done at each iteration, includes sliding window
- Building a prefix sum: O(n)
- Finding the sum of a subarray given a prefix sum: O(1) <br>
![image](https://github.com/user-attachments/assets/d8d7bd6d-471d-4919-adee-0c2c18a44356) <br>
# String
- Add or remove character: O(n)
- Access elements at arbitray index: O(1)
- Concatenation between two strings: O(n + m), where m is the length of the other string
- Create substring: O(m), where m is the length of the substring
- Two Pointers: O(n * k), where k is the work done at each iteration, includes sliding window
- Building a string from joining an array, stringbuilder, etc: O(n)
![image](https://github.com/user-attachments/assets/f6a5d26e-e800-4363-9f48-6367bd16898d) <br>
# Linked Lists
- Add or remove element given pointer before add/removal location: O(1)
- Add or remove element given pointer at add/removal location: O(1) if doubly linked
- Add or remove element at arbitrary position without pointer: O(n)
- Access element at arbitrary position without pointer: O(n)
- Check if element exists: O(n)
- Reverse between position `i` and `j`: O(j - i)
- Detect a cycle: O(n) using fast-slow pointers or hash map
![image](https://github.com/user-attachments/assets/bc5e6466-9368-45ae-a5c0-401d75e2e8dc) <br>
# Hash table/dictionary
- Add or remove key-value pair: O(1)
- Check if key exists: O(1)
- Check if value exists: (n)
- Access or modify value associated with key: O(1)
- Iterate over all keys, values, or both: O(n)
![image](https://github.com/user-attachments/assets/91642b24-deef-4a68-9987-a73ce25a47da) <br>
# Set
- Add or remove element: O(1)
- Check if element exists: O(1) <br>
![image](https://github.com/user-attachments/assets/adb53088-ee72-4fb9-aba8-98e283386c3a) <br>
# Stack
- Push element: O(1)
- Pop element: O(1)
- Peek (See element at top of stack): O(1)
- Access or modify element at arbitrary index: O(1)
- Check if elements exists: O(n) <br>
![image](https://github.com/user-attachments/assets/4bedd572-6be6-480e-aedc-a456ff3ba851) <br>
# Queue
- Enqueue element: O(1)
- Dequeue element: O(1)
- Peek (see element at front of queue): O(1)
- Access or modify element at arbitrary index: O(n)
- Check if element exists: O(n) <br>
![image](https://github.com/user-attachments/assets/4fbf1a47-fcfc-406d-b32b-d0c059e7d162) <br>
# Binary Tree Problems (DFS/BFS)
Given `n` as the number of nodes in the tree, <br>
Most algorithms will run in O(n * k) time, where k is the work done at each node, usually O(1).
![image](https://github.com/user-attachments/assets/4b463000-cfff-4875-8847-4f163fd88ac7) <br>
![image](https://github.com/user-attachments/assets/ef4bf0fd-202a-4d1d-8a69-594031257daf) <br>
# Binary Search Tree
- Add or remove element: O(n), worse case, O(log n) averase case
- Check if element exists: O(n), worse case, O(log n) averase case
![image](https://github.com/user-attachments/assets/2b7a4486-2383-4dce-97df-62f4f8f5a148) <br>
## Technique Psuedocode
```
int binarySearch(vector<int> vec, int target){
    int left{0};
    int right = vec.size() - 1;

    while(left < right){
        int mid = left + (right - left) / 2;

        if(vec[mid] == target){
            return mid; // Target found at index mid
        } else if(vec[mid] < target){
            left = mid + 1; // Search in right half
        } else {
            right = mid + 1; // Search in left half
        }
    }
    return -1; // Not found
}
```
# Heap/Priority Queue
- Add an element: O(log n)
- Delete the minimum element: O(log n)
- Find the minimum element: O(1)
- Check if element exists: O(n) <br>
![image](https://github.com/user-attachments/assets/92dbc7ef-0e3a-4f10-aba3-aff375afbb0f) <br>
# Binary Search
Binary search runs in O(log n) in the worse case, where n is the size of your initial search space. <br>
![image](https://github.com/user-attachments/assets/6a73ab69-db9e-4729-8888-dcad209bbe2a) <br>
# Sorting Algorithms
Is is usually correct to assume and say sorting costs O(n * log n), where n is the number of elements being sorted. <br>
![image](https://github.com/user-attachments/assets/200cac32-ef1d-4871-b0cb-9741177ed6f9) <br>
# Problem Type to STL C++ Data Structure Cheat Sheet
## Array/String Problems
- vector<T>: Dynamic array, great for most array problems
- array<T, N>: Fixed-size array when size is known at compile time
- string: For string manipulation problems

## Hash Table Problems
- unordered_map<K, V>: Fast key-value lookups, useful for counting or mapping
- unordered_set<T>: Fast element lookups, good for checking existence

## Ordered Data Problems
- map<K, V>: Sorted key-value pairs, useful when order matters
- set<T>: Sorted unique elements, good for maintaining sorted data

## Stack Problems
- stack<T>: LIFO data structure, useful for parsing, backtracking

## Queue Problems
- queue<T>: FIFO data structure, useful for BFS
- deque<T>: Double-ended queue, useful when need to add/remove from both ends

## Priority Queue Problems
- priority_queue<T>: Heap data structure, useful for top K elements, scheduling

## Linked List Problems
- Use custom ListNode structure or std::list<T> if modification heavy

## Tree Problems
- Use custom TreeNode structure
- For special trees: map<K, V> (for BST-like behavior)

## Graph Problems
- vector<vector<int>>: Adjacency list representation
- unordered_map<int, vector<int>>: Adjacency list with non-contiguous vertices

## Interval Problems
- vector<pair<int, int>>: For storing intervals

## Bit Manipulation Problems
- bitset<N>: Fixed-size sequence of N bits

## String Matching Problems
- string: Base data structure
- unordered_map<char, int>: For character frequency

## Dynamic Programming Problems
- vector<int> or vector<vector<int>>: For memoization or tabulation

## Sliding Window Problems
- Typically use basic types (int, char) with two-pointer technique
- unordered_map<char, int>: Often used for character frequency in the window

## Matrix Problems
- vector<vector<int>>: 2D dynamic array

## Trie Problems
- Custom TrieNode structure or nested unordered_map<char, TrieNode*>
# Problem Type to Algorithm/Technique Cheat Sheet (C++)

## Array/String Problems
- Two Pointers: Efficient for in-place operations or finding pairs
- Sliding Window: For subarrays/substrings with specific properties
- Prefix Sum: For range sum queries or cumulative operations

## Searching Problems
- Binary Search: For sorted arrays or search space reduction
- Linear Search: For unsorted data or when binary search isn't applicable

## Sorting Problems
- std::sort(): General-purpose sorting
- Counting Sort: For small range of integers
- Bucket Sort: For uniformly distributed data
- Quicksort: When average-case O(n log n) is acceptable
- Mergesort: When stable sort is needed

## Dynamic Programming
- Top-down (Memoization): Recursive problems with overlapping subproblems
- Bottom-up (Tabulation): Iterative approach for DP problems
- Common patterns: 0/1 Knapsack, Longest Common Subsequence, etc.

## Graph Traversal
- Depth-First Search (DFS): Exploring paths, cycle detection, topological sort
- Breadth-First Search (BFS): Shortest path in unweighted graphs, level-order traversal

## Graph Algorithms
- Dijkstra's Algorithm: Shortest path in weighted graphs
- Bellman-Ford: Shortest path with negative edges
- Floyd-Warshall: All-pairs shortest path
- Kruskal's/Prim's: Minimum Spanning Tree
- Topological Sort: For Directed Acyclic Graphs (DAGs)

## Tree Traversal
- Inorder, Preorder, Postorder: For various tree problems
- Level-order (BFS): For level-wise operations

## Backtracking
- For generating all possible combinations/permutations
- Solving puzzles (e.g., N-Queens, Sudoku)

## Greedy Algorithms
- For optimization problems where local optimal choice leads to global optimal

## Divide and Conquer
- For problems that can be broken down into similar subproblems

## Bit Manipulation
- For problems involving binary operations or optimization

## String Matching
- KMP (Knuth-Morris-Pratt): Efficient pattern matching
- Rabin-Karp: Rolling hash for pattern matching

## Mathematical Algorithms
- Sieve of Eratosthenes: Prime number generation
- Euclidean Algorithm: GCD calculation
- Fast Exponentiation: Quick power calculation

## Union-Find (Disjoint Set)
- For problems involving connected components or equivalence relations

## Sliding Window
- For substring/subarray problems with specific constraints

## Monotonic Stack/Queue
- For next greater/smaller element problems
- For maintaining order in a specific window

## Trie
- For prefix-based string problems or autocomplete features

## Heap
- For k-th element problems or partial sorting
# General DSA Cheat Sheet 
![image](https://github.com/user-attachments/assets/d3cd06f0-4228-4c68-8c8e-4030ede6a300) <br>

