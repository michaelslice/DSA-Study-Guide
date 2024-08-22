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
![image](https://github.com/user-attachments/assets/c28a41ff-f0d0-4fe7-a214-8b3fecfccf4b) <br>
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
# Heap/Priority Queue
- Add an element: O(log n)
- Delete the minimum element: O(log n)
- Find the minimum element: O(1)
- Check if element exists: O(n)
![image](https://github.com/user-attachments/assets/92dbc7ef-0e3a-4f10-aba3-aff375afbb0f) <br>
# Binary Search
Binary search runs in O(log n) in the worse case, where n is the size of your initial search space. <br>
![image](https://github.com/user-attachments/assets/fcd8178a-075b-4e76-afc1-1d26aaf7518d) <br>
# Sorting Algorithms
Is is usually correct to assume and say sorting costs O(n * log n), where n is the number of elements being sorted. <br>
![image](https://github.com/user-attachments/assets/200cac32-ef1d-4871-b0cb-9741177ed6f9) <br>
# General DSA Cheat Sheet 
![image](https://github.com/user-attachments/assets/d3cd06f0-4228-4c68-8c8e-4030ede6a300) <br>

