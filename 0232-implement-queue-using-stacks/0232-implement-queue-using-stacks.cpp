class MyQueue {
public:
    stack<int>stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(stk.size()==0){
            stk.push(x);
            return;
        }
        int t=stk.top();
        stk.pop();
        push(x);
        stk.push(t);
    }
    
    int pop() {
        int t=stk.top();
        stk.pop();
        return t;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
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