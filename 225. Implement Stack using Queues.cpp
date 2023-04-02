class MyStack {
public:
    // queue<int> q1;
    // queue<int> q2;
    
    // MyStack() {
    //     q1 = {};
    // }
    
    // void push(int x) {
    //     q2.push(x);
    //     while(!q1.empty())
    //     {
    //         q2.push(q1.front());
    //         q1.pop();
    //     }
    //     q2.swap(q1);
    // }
    
    // int pop() {
    //     int m = q1.front();
    //     q1.pop();
    //     return m;
    // }
    
    // int top() {
    //     return q1.front();
    // }
    
    // bool empty() {
    //     if(q1.empty())
    //     return true;

    //     return false;
    // }

    queue<int> q;
    MyStack() {
        q = {};
    }
    
    void push(int x) {
        q.push(x);
        int size = q.size();
        for(int i = 0; i < size-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int m = q.front();
        q.pop();
        return m;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())
        return true;

        return false;
    }

};

//  MyStack() {
//         q = {};
//     }
    
//     void push(int x) {

//     }
    
//     int pop() {

//     }
    
//     int top() {

//     }
    
//     bool empty() {

//     }

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
