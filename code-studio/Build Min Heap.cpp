//heapify algorithm complexity O(n)
void heapify(vector<int> &arr, int n, int i)
{
	//if size is less than 1 return	
	if(n < 1)
	return;
	
	//getting the parent node and its left right
	int smallest = i;
	int left = 2*smallest + 1;
	int right = 2*smallest + 2;
	
	// checking if left node is greater or not
	if(left < n && arr[smallest] > arr[left])
	smallest = left;
	
	// checking if right node is greater or not	
	if(right < n && arr[smallest] > arr[right])
	smallest = right;
	
	// if parent node is not equal to itself then swap and call heapify again for the to check if it is at correct position
	if(smallest != i)
	{
		swap(arr[smallest], arr[i]);
		heapify(arr, n, smallest);
	}
}

#include <bits/stdc++.h> 
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
	// calculating the index from which the elements need to be swap ... bcoz leaf node don't need to chnge the position	
	for(int i = (n/2)-1; i >= 0; i--)
	heapify(arr, n, i);

    return arr;
}
