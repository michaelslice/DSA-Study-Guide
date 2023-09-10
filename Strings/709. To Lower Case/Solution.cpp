class Solution {
public:
    string toLowerCase(string s) {
        
    for(char &character: s)
    {
        if(std::isupper(character))
        {
            character = std::tolower(character);
        }
    }
return s;
    }
};