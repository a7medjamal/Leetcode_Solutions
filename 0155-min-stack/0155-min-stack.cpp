class MinStack {
public:
    MinStack() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        dq=deque<int>();
    }
    deque<int>dq;
    void push(int val) {
        dq.push_front(val);
    }
    
    void pop() {
        dq.pop_front();
    }
    
    int top() {
        return dq.front();
    }
    
    int getMin() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        return *min_element(dq.begin(),dq.end());
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