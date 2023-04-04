#include<bits/stdc++.h>
class CustomStack {
public:
    vector<int> res;
    int size;
    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(res.size() != size)
        res.push_back(x);    
    }
    
    int pop() {
        if(res.size() == 0)
        return -1;

        int m = res[res.size() - 1];
        res.pop_back();
        return m;
    }
    
    void increment(int k, int val) {
        if(res.size() != 0)
        {
            k = min(k, (int)res.size());

            for(int i = 0; i < k; i++)
            {
                int sum = val + res[i];
                res[i] = sum;
            }   
        }
    }
    // arr[0] = -2;
    // ["CustomStack","push","pop","increment","pop","increment","push","pop","push","increment","increment","increment"]
    // [[2],[34],[],[8,100],[],[9,91],[63],[],[84],[10,93],[6,45],[10,4]]
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
