class MinStack {
public:
    
    stack<int> s1,s2;
    
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int val) {
        
        s1.push(val);
        //check if s2 is not empty and give value is less than current top of the stack with        //min value then push val else again top
        s2.push((!s2.empty() && s2.top() < val) ? s2.top() : val);
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
       return  s2.top();
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

//secodn solution
class MinStack {
public:
    
    stack<pair<int,int>> s;
    
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int val) {
        
        // s1.push(val);
        //check if s2 is not empty and give value is less than current top of the stack with        //min value then push val else again top
        //s2.push((!s2.empty() && s2.top() < val) ? s2.top() : val);
        int min=!s.empty() && s.top().second < val ? s.top().second : val;
        
        s.push({val, min});
    }
    
    void pop() {
        // s1.pop();
        // s2.pop();
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
       return  s.top().second;
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
