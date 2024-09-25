// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool isValid(string s) {
        stack<char> my_stack;

        // Iterate through the string
        for(auto c: s){
            // Push opening brackets onto the stack
            if(c == '(' || c == '{'  || c == '['){
                my_stack.push(c);
            } else {
                // If there are no opening brackets this is a not valid
                if(my_stack.empty()){
                    return false;
                }                
                
                // If we find the closing bracket, pop the opening bracket from the stack
                char top = my_stack.top(); 
                if( c == ')' && top == '(' ||  
                    c == '}' && top == '{' ||
                    c == ']' && top == '[' 
                ){
                    my_stack.pop();
                } else { // If there is not closing bracket it is not valid
                    return false;
                }
            }
        }
        return my_stack.empty();   
    }
};