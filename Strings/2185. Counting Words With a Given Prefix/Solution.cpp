class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
    int count{0};

    for (const std::string& letter: words)
    {
        if(letter.substr(0, pref.length()) == pref)
        {
            ++count;
        }
    }
return count;
    }
};