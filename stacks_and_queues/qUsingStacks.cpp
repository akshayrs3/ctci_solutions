// Time: O(1) amortized
// Space: O(n)

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> push_stack;
    stack<int> pop_stack;
    MyQueue() {
    
    }
    /** Push element x to the back of queue. */
    void push(int x) {
        push_stack.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = 0;
        if(!pop_stack.empty()){
            x = pop_stack.top();
            pop_stack.pop();
            return x;
        } 
        while(!push_stack.empty()){
            x = push_stack.top();
            pop_stack.push(x);
            push_stack.pop();
        }
        x = pop_stack.top();
        pop_stack.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        if(!pop_stack.empty()) return pop_stack.top();
        int x = 0;
        while(!push_stack.empty()){
            x = push_stack.top();
            pop_stack.push(x);
            push_stack.pop();
        }
        return pop_stack.top();
    
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (push_stack.empty() && pop_stack.empty());
    }
};
