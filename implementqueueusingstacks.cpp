//November 20th, 2024

class MyQueue {
public:
      stack<int> si;
    stack<int> si2;
    MyQueue() {
      
    }
    
    void push(int x) {
        si.push(x);
    }
    
    int pop() {
        while (!si.empty()){
            si2.push(si.top());
            si.pop();
        }
       int a=si2.top();
        si2.pop();
        while (!si2.empty()){
            si.push(si2.top());
            si2.pop();
        }
        return a;
    }
    
    int peek() {
        while (!si.empty()){
            si2.push(si.top());
            si.pop();
        }
        int a=si2.top();
        while (!si2.empty()){
            si.push(si2.top());
            si2.pop();
        }
        return a;
    }
    
    bool empty() {
        return si.empty();
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
