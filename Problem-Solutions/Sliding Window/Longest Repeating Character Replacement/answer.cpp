class Solution {
public:
    int characterReplacement(string s, int k) {
    
    /* 
    1. Use Sliding Window to find the valid subarray, and 
       use a hashmap to keep the count of each element
    */

    int left{0};
    map<char, int> my_map;
    int max_count{0};
    int max_substr{0};

    for(int right{0}; right < s.size(); ++right){
        my_map[s[right]]++; // Update the count of the element s[right], in the map

        // Keep track of the most common occuring element
        max_count = max(max_count, my_map[s[right]]); // Update max_count, with the count of s[right] in the map

        // Keep track of the current window size, the num of elements between left and right pointer inclusive
        int window_size = right - left + 1;

        // Check if the current window size is valid, meaning the number of least common elements is less than k
        if(window_size - max_count > k){
            my_map[s[left]]--; // Decrement, because we are shrinking the window
            left++;
        }

        max_substr = max(max_substr, right - left + 1); // Update to the longest consecutive subtr
    }

    return max_substr;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)