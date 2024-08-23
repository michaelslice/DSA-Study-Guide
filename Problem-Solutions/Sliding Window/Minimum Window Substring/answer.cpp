class Solution {
public:
    string minWindow(string s, string t) {
    
    /*
    1. General approach use Sliding window and 2 hashmaps to keep track of the valid minimum substring 
    */

    int s_size = s.size();
    int t_size = t.size();

    // If impossible for min widow
    if(s_size < t_size){
        return "";
    }

    unordered_map<char, int> window_map;
    unordered_map<char, int> t_map;
    
    // Keep track of the count of every element in t
    for(auto num: t){
        t_map[num]++;
    }

    int min_window_substr{0};
    int left{0};
    int right{0};
    int min_len = INT_MAX, start{0};
    int valid{0}; // Number of characters that meet required frequency

    while(right < s_size){
        char c = s[right];
        right++;

        // Update the window map with the current character
        if(t_map.count(c)){
            window_map[c]++;
            if(window_map[c] == t_map[c]){
                valid++;
            }
        }

        // Shrink the window until it becomes valid
        while(valid == t_map.size()){
            if(right - left < min_len){
                min_len = right - left;
                start = left;
            }

            char d = s[left];
            left++;

            if(t_map.count(d)){
                if(window_map[d] == t_map[d]){
                    valid--;
                }
                window_map[d]--; 
            }
        }
    }

    return min_len == INT_MAX ? "" : s.substr(start, min_len);
    }
};