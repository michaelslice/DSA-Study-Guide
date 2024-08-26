class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    
    /* 
    Sliding Window
    */

    int s1_size = s1.size();
    int s2_size = s2.size();

    // If s1 is longer than s2 than impossible for permutation
    if(s1_size > s2_size){
        return false;
    }

    // Keep track of the count of elements in s1
    map<char, int> s1_map;
    // Keep track of the count of elements in the window
    map<char, int> window_map;

    // Count the occurance of each element
    for(char c: s1){
        s1_map[c]++;
    }

    int left{0};

    // Sliding window
    for(int right{0}; right < s2_size; ++right){
        // Update the count of the current element
        window_map[s2[right]]++;

        // Check if the current window size is longer than s1
        if(right - left + 1 > s1_size){
            // Since we are shrinking the window by 1, decrement the count
            window_map[s2[left]]--;
            
            // If the elements count is 0, erase it from the map
            if(window_map[s2[left]] == 0){
                window_map.erase(s2[left]);
            }

            // Keep shrinking the window
            left++;
        }

        // If the frequency map of s1_map matches the frequency of the window there is a permutation
        if(s1_map == window_map){
            return true;
        }
    }

    return false;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)