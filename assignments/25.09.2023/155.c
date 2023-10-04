class MinStack {
public:
    stack<pair<int, int>> stack;
    // MinStack() {
        
    // }
    
    void push(int x) {
        if(stack.empty()){
            stack.emplace(x,x);
        }
        else{
            stack.emplace(x,min(x,stack.top().second));
        }
    }
    
    void pop() {
        stack.pop();
    }
    
    int top() {
        return stack.top().first;
    }
    
    int getMin() {
        return stack.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */