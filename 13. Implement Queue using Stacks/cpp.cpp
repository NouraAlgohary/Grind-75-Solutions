class MyQueue {
public:
stack<int>mainSt, supportSt;
    MyQueue() {
    }
    
    void push(int x) {
        mainSt.push(x);
    }
    
    int pop() {
        change(mainSt, supportSt);
        int front = supportSt.top();
        supportSt.pop();
        change(supportSt, mainSt);

        return front;
    }
    
    int peek() {
        change(mainSt, supportSt);
        auto front = supportSt.top();
        change(supportSt, mainSt);

        return front;
    }

    void change(stack<int>& moveFrom, stack<int>& moveTo)
    {
        while(!moveFrom.empty())
        {
            moveTo.push(moveFrom.top());
            moveFrom.pop();
        }
    }
    
    bool empty() {
        if(mainSt.empty())
            return true;
        
        return false;
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