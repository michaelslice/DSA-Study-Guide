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
    bool isAnagram(string s, string t) {

    // Sort both letters in alphabetical order
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    return(s == t);
    }
};