class MinStack {
    stack<pair<int,int>> min_Stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (min_Stack.empty()) {
           min_Stack.push({val, val});
        } else {
            min_Stack.push({val, min(val, min_Stack.top().second)});
        }

    }
    
    void pop() {
        if(!min_Stack.empty())min_Stack.pop();
    }
    
    int top() {
        int value=-1;
        if(!min_Stack.empty())value=min_Stack.top().first;
        return value;
    }
    
    int getMin() {
        int value=-1;
        if(!min_Stack.empty())value=min_Stack.top().second;
        return value;
    }
};
