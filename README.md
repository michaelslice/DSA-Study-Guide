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
- Finding the sum of a subarray given a prefix sum: O(1)
# String
- Add or remove character: O(n)
- Access elements at arbitray index: O(1)
- Concatenation between two strings: O(n + m), where m is the length of the other string
- Create substring: O(m), where m is the length of the substring
- Two Pointers: O(n * k), where k is the work done at each iteration, includes sliding window
- Building a string from joining an array, stringbuilder, etc: O(n)
# Linked Lists
- Add or remove element given pointer before add/removal location: O(1)
- Add or remove element given pointer at add/removal location: O(1) if doubly linked
- Add or remove element at arbitrary position without pointer: O(n)
- Access element at arbitrary position without pointer: O(n)
- Check if element exists: O(n)
- Reverse between position `i` and `j`: O(j - i)
- Detect a cycle: O(n) using fast-slow pointers or hash map
# Hash table/dictionary
- Add or remove key-value pair: O(1)
- Check if key exists: O(1)
- Check if value exists: (n)
- Access or modify value associated with key: O(1)
- Iterate over all keys, values, or both: O(n)
# Set
- Add or remove element: O(1)
- Check if element exists: O(1)
# Stack
- Push element: O(1)
- Pop element: O(1)
- Peek (See element at top of stack): O(1)
- Access or modify element at arbitrary index: O(1)
- Check if elements exists: O(n)
# Queue
- Enqueue element: O(1)
- Dequeue element: O(1)
- Peek (see element at front of queue): O(1)
- Access or modify element at arbitrary index: O(n)
- Check if element exists: O(n)
# Binary Tree Problems (DFS/BFS)
Given `n` as the number of nodes in the tree, <br>
Most algorithms will run in O(n * k) time, where k is the work done at each node, usually O(1).
# Binary Search Tree
- Add or remove element: O(n), worse case, O(log n) averase case
- Check if element exists: O(n), worse case, O(log n) averase case
# Heap/Priority Queue
- Add an element: O(log n)
- Delete the minimum element: O(log n)
- Find the minimum element: O(1)
- Check if element exists: O(n)
# Binary Search
Binary search runs in O(log n) in the worse case, where n is the size of your initial search space. <br>
# Sorting Algorithms
Is is usually correct to assume and say sorting costs O(n * log n), where n is the number of elements being sorted. <br>
![image](https://github.com/user-attachments/assets/200cac32-ef1d-4871-b0cb-9741177ed6f9) <br>
# General DSA Cheat Sheet 
![image](https://github.com/user-attachments/assets/d3cd06f0-4228-4c68-8c8e-4030ede6a300) <br>

