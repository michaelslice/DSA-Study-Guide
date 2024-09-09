// Time Complexity: O(2^n)
// Space Complexity: O(n)

class Solution {
public:
    // n: Represents the number of pairs of parentheses
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, 0, 0, "", result);
        return result;
    }
private:
    void generate(int n, int open, int close, string str, vector<string>& result){
        // Base Case: If open and close are equal to n, then we know it is a valid string
        if(open == n && close == n){
            result.push_back(str);
            return;
        }
        // If open is less than n, we can keep adding parentheses to our answer
        if(open < n){
            generate(n, open + 1, close,  str + '(', result);
        }
        // We can only add closing parentheses if there are more open parentheses can closing 
        if(open > close){
            generate(n, open, close + 1, str + ')', result);
        }
    }
};