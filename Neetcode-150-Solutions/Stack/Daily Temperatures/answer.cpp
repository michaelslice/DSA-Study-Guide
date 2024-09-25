class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> my_stack; // Stack to store indices
        vector<int> ans(temperatures.size(), 0);

        // Iterate through the temperatures
        for(int i{0}; i < temperatures.size(); ++i){
            // While stack is not empty and the current temperature is higher than
            // the temperature at the index stored at the top of the stack
            while(!my_stack.empty() && temperatures[i] > temperatures[my_stack.top()]){
                int prev_index = my_stack.top(); // Get the index from the top of the stack
                my_stack.pop(); // Pop the stack
                ans[prev_index] = i - prev_index; // Calculate the number of days
            }
            // Push the current index to the stack
            my_stack.push(i);
        }
        return ans;
    }
}; 