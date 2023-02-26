// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5

// Solution 1: create a mix heap (for kth smallest element create max heap) and push first k elements and for the remaining elements if it is greater then pop the 
// root node and push the greater element again in heap at last return top of the queue
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < k; i++)
    pq.push(nums[i]);

    for(int i = k; i < nums.size(); i++)
    {
        if(nums[i] > pq.top())
        {
            pq.pop();
            pq.push(nums[i]);
        }
    }
    return pq.top();
    }
};
