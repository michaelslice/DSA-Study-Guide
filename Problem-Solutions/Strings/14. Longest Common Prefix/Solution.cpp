class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

    string result;
    result = strs[0];

    for(int i{1}; i < strs.size(); ++i)
    {
        for(int j{0}; j < result.size(); ++j)
        {
            if (strs[i][j] !=result[j])
            {
                result = result.substr(0, j);
            }
        }
    }

return result;

    }
};