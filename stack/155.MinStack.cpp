class MinStack {
    private:
    vector<int>ms;
    vector<int>min_stack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        ms.push_back(val);
        if(min_stack.empty()||val<=min_stack.back())//.back works just like top()
        min_stack.push_back(val);
    }
    
    void pop() {
        if(!ms.empty()){
        int n=ms.size();
        if(!min_stack.empty()&& ms.back()==min_stack.back())
        {
            min_stack.resize(min_stack.size()-1);
        }
        ms.resize(n-1);
        }
    }
    
    int top() {
        if(!ms.empty()){
        int n=ms.size();
        return ms[n-1];
        }
        return 0;
    }
    
   int getMin() {
    if (!min_stack.empty()) {
        return min_stack.back();
    }
    return INT_MAX; 
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