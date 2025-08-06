class MyQueue {
    private:
    stack<int>stk1;
    stack<int>stk2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(stk2.empty())
        {
            stk1.push(x);
        }
        else
        {
            while(!stk2.empty())
            {
                stk1.push(stk2.top());
                stk2.pop();
            }
            stk1.push(x);
        }
    }
    
    int pop() {
        if(!stk2.empty())
        {
            int top= stk2.top();
            stk2.pop();
            return top;
        }
        else
        {
            while(!stk1.empty())
            {
                stk2.push(stk1.top());
                stk1.pop();
            }
            int top= stk2.top();
            stk2.pop();
            return top;
        }
    }
    
    int peek() {
        if(!stk2.empty())
        {
            return stk2.top();
        }
        else
        {
            //transfer first
            while(!stk1.empty())
            {
                stk2.push(stk1.top());
                stk1.pop();
            }
            return stk2.top();
        }
    }
    
    bool empty() {
        if(stk1.empty()&&stk2.empty()) return true;
        else
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */