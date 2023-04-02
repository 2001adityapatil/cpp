#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    int t;
    int* arr;
    int c;
    Stack(int capacity) {
        // Write your code here.
        arr= new int[capacity];
        c = capacity;
        t = 0;
    }

    void push(int num) {
        // Write your code here.
        if(t == c) return;
        arr[t] = num;
        t++;
    }

    int pop() {
        // Write your code here.
        if(t == 0) return -1;
        int tmp = arr[t-1];
        t--;
        return tmp;
    }
    
    int top() {
        // Write your code here.
        if(t == 0) return -1;
        return arr[t-1];
    }
    
    int isEmpty() {
        // Write your code here.
        return t==0;
    }
    
    int isFull() {
        // Write your code here.
        if(t == c)
        return 1;
        else
        return 0;
    }
    
};
