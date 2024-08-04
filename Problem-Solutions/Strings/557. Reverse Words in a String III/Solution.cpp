class Solution {
public:
    string reverseWords(string s) {

    s.push_back(' ');
    string ans, str ;  

    for(auto c: s)
    {
        if (c== ' ')
        {
            std::reverse(str.begin(), str.end());
            ans += str;
            ans += ' ';
            str.clear();
        }
        else str.push_back(c);
        
    }

ans.pop_back(); // pop_back removes the elements from the back of the vector 
return ans;

    }
};