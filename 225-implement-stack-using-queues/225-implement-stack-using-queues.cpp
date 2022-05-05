class MyStack {
    deque<int>storage;
public:
    MyStack() {
      
    }
    
    void push(int x) {
        storage.push_back(x);
    }
    
    int pop() {
        int val = storage.back();
        storage.pop_back();
        return val;
        
    }
    
    int top() {
        return storage.back();
    }
    
    bool empty() {
        return storage.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */