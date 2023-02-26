// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.

// Solution 1: create a max heap and push first k elements and for the remaining elements
// if it is small then pop the root node and push the small element again in heap at last return
// top of the queue

// Solution 2: sort the array and return the kth-1 element

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> pq;
        
        for(int i = 0; i < k; i++)
        pq.push(arr[i]);
        
        for(int i = k; i <= r; i++)
        {
            if(arr[i] < pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};

