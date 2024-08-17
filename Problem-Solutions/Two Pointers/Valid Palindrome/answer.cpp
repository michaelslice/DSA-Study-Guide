#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
    // ignoring spaces, punctuation, and capitalization
    // isalnum
    string ans;
    for(int i{0}; i < s.size(); ++i) {
        if(std::isalnum(s[i])) {
            ans.push_back(tolower(s[i]));
        }
    }
    string rev;
    int size = ans.size() - 1;
    for(int i{size}; i >= 0; --i){
        rev.push_back(tolower(ans[i]));
    }

    return (ans == rev);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)