class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    /**
    1. Create a hashmap to store key(word), value(array of words)

    */
    unordered_map<string, vector<string>> map;
    vector<vector<string>> vec;

    for(auto str : strs) {
        // Sort the word
        string sorted_word = str;
        sort(sorted_word.begin(), sorted_word.end());

        auto search = map.find(sorted_word);

        // If the key is all ready in the map
        if(search != map.end()) {
            map[search->first].push_back(str);
        } else {
            map[sorted_word].push_back(str); 
        }
        // If the key is not in the map

    }

    for(const auto &num: map) {
        vec.push_back(num.second);
    }

    return vec;
    }
};