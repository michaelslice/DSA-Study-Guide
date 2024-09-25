// Time Complexity: O(n) 
// Space Complexity: O(n)

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        // O(1)
        stack<int> my_stack;
        int ans{0};
        
        // O(n)
        for(int i{0}; i < tokens.size(); ++i)
            
            if(tokens[i] != "+" &&
               tokens[i] != "-" &&
               tokens[i] != "/" &&
               tokens[i] != "*" 
            ){
                my_stack.push(stoi(tokens[i]));
            }
            else {
                
                int right_operand = my_stack.top();
                my_stack.pop();

                int left_operand = my_stack.top();
                my_stack.pop();

                if(tokens[i] == "+"){
                    my_stack.push(left_operand + right_operand);
                } else if(tokens[i] == "-"){
                    my_stack.push(left_operand - right_operand);
                } else if(tokens[i] == "*"){
                    my_stack.push(left_operand * right_operand);
                } else if(tokens[i] == "/"){
                    my_stack.push(left_operand / right_operand);
                }
            }
        return my_stack.top();
    }
};