// Time:   Push O(1)  Pop O(n) Peek O(n)
// Space:  Push O(1)  Pop O(n) Peek O(n)

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
    int size;
    MyQueue() {
        size = 0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
        size++;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = 0;
        while(!s1.empty()){
            x = s1.top();
            s2.push(x);
            s1.pop();
        }
        int res = s2.top();
        s2.pop();
        while(!s2.empty()){
            x = s2.top();
            s1.push(x);
            s2.pop();
        }
        size--;
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        int x = 0;
        while(!s1.empty()){
            x = s1.top();
            s2.push(x);
            s1.pop();
        }
        int res = s2.top();
        while(!s2.empty()){
            x = s2.top();
            s1.push(x);
            s2.pop();
        }
        return res;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return size == 0;
    }
};
