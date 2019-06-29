// Time: O(1)
// Space: O(n) for two stacks.

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> ele;
    stack<int> min;
    int size;
    MinStack() {
        size = 0;
    }
    
    void push(int x) {
        ele.push(x);
        if(min.empty() || x <= min.top()) min.push(x);
    }
    
    void pop() {
        int x = ele.top();
        if(!min.empty() && min.top() == x) min.pop();
        ele.pop();
    }
    
    int top() {
        return ele.top();
    }
    
    int getMin() {
        return min.top();
    }
};
