class MyStack {
public:
    deque<int>dq;
    MyStack() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    
    void push(int x) {
        return dq.push_front(x);
    }
    
    int pop() {
        int ret = dq.front();
        dq.pop_front();
        return ret;
    }
    
    int top() {
        return dq.front();
    }
    
    bool empty() {
        return dq.empty();
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