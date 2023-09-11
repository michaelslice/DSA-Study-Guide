class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    std::vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

  std::unordered_map<string, int> hashmap;

  for(int i{0}; i < words.size(); ++i)
  {
    std::string str;
    for(int j{0}; j < words[i].size(); ++j) 
    {
        str += vec[words[i][j] - 'a'];
        hashmap[str] = 1;
    }
  }  
    return hashmap.size();
    }
};