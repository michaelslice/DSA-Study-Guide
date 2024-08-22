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
# Two Pointers
- Two pointers is an extremely common technique used to solve array and string problems. It involves having two integer variables that both move along an iterable. We will have two variables named `left` and `right` which each represent an index of the array or string.
## Converting This Idea Into Instructions
1. Start one pointer at the first index `0` and the other pointer at the last index `vec.size() - 1`
2. Use a while loop until the pointers are equal to each other
3. At each iteration of the loop, move the pointers towards each other. This means either increment the pointer that started at the first index, decrement the pointer that started at the last index, or both. Deciding which pointers to move will depend on the problem that you are trying to solve.
## Technique Psuedocode
```
int func(vector<int> vec){
  left = 0;
  right = vec.size() - 1;

while (left < right){
  // Do some logic here
  // Do some more logic here to decide on one of the following
    1. left++;
    2. right--;
    3. Both left++ and right--  
```
This strength in this technique is that we will never have more than O(n) iterations for the while loop, because the pointers start at `n` away from each other and move at least one step closer in every iteration. Therefore, if we can keep the work inside each iteration at O(1), this technique will result in linear runtime.
## General Notes on Two Pointers
- Some problems can have the pointers starting at the first and last index, but some problems can be solved by starting the pointers at different indices.
- Two Pointers just refers to using two integer variables to move along some iterables.
# Sliding Window
- Sliding window is another common approach to solving problems related to strings and arrays. The sliding window is implemented using two pointers. To understand the sliding window, the `subarray` must be understood
## Subarrays
- Given an array, a `subarray` is a contiguous section of the array for example the subarray of `[1, 2, 3, 4]` are
  - `[1]`, `[2]`, `[3]`, `[4]`
  - `[1, 2]`, `[2, 3]`, `[3, 4]`
  - `[1, 2, 3]`, `[2, 3, 4]`
  - `[1, 2, 3, 4]`
- A subarray can be defined by two indices, the start and end. For example, with `[1, 2, 3, 4]`, the subarray `[2, 3]` has a starting index of `1` and an ending index of `2`. The starting index can be called the `left bound` and the ending index the `right bound`.
![image](https://github.com/user-attachments/assets/bdbd73f9-9483-4bec-ad57-1e2fa754ecd6) <br>
## When to Use Sliding Window?
There is a very common group of problems involving subarrays that can be solved efficiently with sliding window.
1. First the problem will either explicitly or implicitly define criteria that makes a subarray "valid"
   - A constraint metric: Generally some attribute of a subarray like, sum, unique elements, frequency
   - A numeric restriction on the constraint metric
2. The problem will ask you to find valid subarrays in some way
   - Most commonly the task is to find the "best" valid subarray, under some specific criteria
   - Another common task is finding the number of valid subarrays
## The Sliding Window Algorithm
1. The idea behind a slide window is to consider **only** valid subarrays. Recall that a subarray can be defined by a left bound (the index of the first element) and a right bound(the index of the last element). In sliding window, we maintain two variables `left` and `right`, which at any given time represent the **current subarray** under consideration.
2. Initially, we have `left = right = 0`, which means that the first subarray we look at is just the first element of the array on its own. We want to expand the size of our "window", and we do that by incrementing `right`. When we increment `right`, this is like "adding" a new element to our window
3. But what if after adding a new element, the subarray becomes invalid? We need to "remove" some elements from our window until it becomes valid again. To "remove" elements, we can increment `left`, which shrinks our window.
4. As we add and remove elements, we are "sliding" our window along the input from left to right. The window's size is constantly changing - it grows as large as it can until it's invalid, and then it shrinks. However, it always slides along to the right, until we reach the end of the input. <br>
![image](https://github.com/user-attachments/assets/71c37dfb-83c2-4ada-bb77-1ad2ea3d76f3) <br>
## Technique Psuedocode
```
int func(vector<int> vec){
  left = 0;
  for(int right = 0; right < vec.size(); right++){
      // Do some logic to "add" element at vec[right] to window

      while(CONDITION THAT MAKES WINDOW INVALID){
          // Do some logic to "remove" element at vec[left] from window
          left++;
      }
   }
      // Do some logic to update the answer
}
```
# General DSA Cheat Sheet 
![image](https://github.com/user-attachments/assets/d3cd06f0-4228-4c68-8c8e-4030ede6a300) <br>

