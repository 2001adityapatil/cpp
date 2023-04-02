#include <bits/stdc++.h> 
class Queue {
public:
    int fuck;
    int rear;
    vector<int> arr;
    int cnt;

    Queue() {
        // Implement the Constructor
        fuck = 0;
        rear = 0;
        cnt = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(arr.size() == 0)
        return true;
        
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        arr.push_back(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        if(arr.size() == 0)
        return -1;
        
        int m = arr[0];
        arr.erase(arr.begin() + 0);

        return m;
    }

    int front() {
        // Implement the front() function
        if(arr.size() == 0)
        return -1;
        int m = arr[0];
        return m;

    }
};
