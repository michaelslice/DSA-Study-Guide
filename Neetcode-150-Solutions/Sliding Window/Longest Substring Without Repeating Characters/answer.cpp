class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    /* 
    1. I am going to use sliding window, and use a set to know if I encounter duplicates
    
    */
    int left{0}; // O(1)
    int max_substr{0}; // O(1)
    set<int> my_set; // O(n)

    for(int right{0}; right < s.size(); ++right){
        if(my_set.find(s[right]) !=my_set.end()){
            while(my_set.count(s[right]) > 0){
                my_set.erase(s[left]);
                left++;
            }
        }
       
        max_substr = max(max_substr, right - left + 1);
        my_set.insert(s[right]);
    }
    return max_substr;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)