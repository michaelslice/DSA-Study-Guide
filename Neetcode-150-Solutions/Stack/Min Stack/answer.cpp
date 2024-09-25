class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        int current_min = my_stack.empty() ? val : min(val, my_stack.top().min);
        
        my_stack.push({current_min, val});
    }
    
    void pop() {
        my_stack.pop();   
    }
    
    int top() {
        return my_stack.top().val;
    }
    
    int getMin() {
        return my_stack.top().min;
    }

private: 
struct Node {
    int min;
    int val;
};

    stack<Node> my_stack;
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */