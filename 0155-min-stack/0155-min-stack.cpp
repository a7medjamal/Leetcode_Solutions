class MinStack {
public:
    MinStack() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    vector<int>v;
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        if(!v.empty())
        {
            v.erase(v.end()-1);
        }
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return *min_element(v.begin(),v.end());
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