#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

class Heap 
{
	//	create the array and size var 
	public:
		int arr[100];
		int size;
	
	//	constructor to initialize the array and size variable	
	Heap()
	{
		arr[0] = -1;
		size = 0;
	}
	
	
	void insert(int val)
	{
		// every time increase the size by one and push the value at index		
		size = size + 1;
		int index = size;
		arr[index] = val;
		
		// check the value inserted is at proper position or not		
		while(index > 1)
		{
			if(arr[index/2] < arr[index])
			{
				swap(arr[index/2],arr[index]);
				index = index/2;
			}
			else
			return;
		}
	}
	
	void deleteFromHeap()
	{
		// check if array is empty or not		
		if(size < 1)
		return;
		
		// if not swap last value with the 1st index 		
		arr[1] = arr[size];
		
		// reduce the size of array	
		size--;
		
		// check all values are at the right position	
		int i = 1;
		while(i < size)
		{
			int leftindex = 2*i;
			int rightindex = 2*i+1;
			
			if(leftindex < size && arr[i] < arr[leftindex])
			{
				swap(arr[i], arr[leftindex]);
				i = leftindex;
			}
			else if(rightindex < size && arr[i] < arr[rightindex])
			{
				swap(arr[i], arr[rightindex]);
				i = rightindex;
			}
			else
			{
				return;
			}
		}
	}
	
	void display()
	{
		for(int i = 1; i <= size; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};

//heapify algorithm complexity O(n)
void heapify(int arr[], int n, int i)
{
	//if size is less than 1 return	
	if(n < 1)
	return;
	
	//getting the parent node and its left right
	int largest = i;
	int left = 2*largest;
	int right = 2*largest+1;
	
	// checking if left node is greater or not
	if(left <= n && arr[largest] < arr[left])
	largest = left;
	
	// checking if right node is greater or not	
	if(right <= n && arr[largest] < arr[right])
	largest = right;
	
	// if parent node is not equal to itself then swap and call heapify again for the to check if it is at correct position
	if(largest != i)
	{
		swap(arr[largest], arr[i]);
		heapify(arr, n, largest);
	}
}

//heap sort complexity O(nlogn)
void heapSort(int arr[], int size)
{
	while(size > 1)
	{
		//swap 
		swap(arr[1], arr[size]);
	
		size--;
	
		heapify(arr, size, 1);	
	}
	
}



int main()
{
//	for 0 based indexing the leftIndex is calculated like 2i+1 and right 2i+2 and for 1 based index is shown in code below 
//  in 0 based indexing left/right <= n/size
	Heap h;
	h.insert(50);
	h.insert(55);
	h.insert(53);
	h.insert(70);
	h.insert(54);
	h.display();
	cout<<endl;
	h.deleteFromHeap();
	h.display();
	cout<<"\n\nHeap Creation "<< endl;
	
	// heap creation	
	int arr[6] = {-1,50,55,53,70,54};
	int n = 5;
	// calculating the index from which the elements need to be swap ... bcoz leaf node don't need to chnge the position	
	for(int i = (n/2)+1; i > 0; i--)
	heapify(arr, n, i);
	
	for(int i = 1; i <= n; i++)
	cout<<arr[i]<<" ";
	
	cout<<"\nHeap Sort"<<endl;
	//heap sort complexity O(nlogn);
	heapSort(arr, n);
	
	for(int i = 1; i <= n; i++)
	cout<<arr[i]<<" ";	
	
	//implement heap using stl	
	
	cout<<"\n\nUsing STL priority queue "<<endl;
	
	cout<<"Max Heap"<<endl;
	//max heap	
	priority_queue<int> pq;
	
	pq.push(3);
	pq.push(4);
	pq.push(1);
	pq.push(5);
	
	cout<<"Element at the top : "<<pq.top()<<endl;
	pq.pop();
	cout<<"Element at the top : "<<pq.top()<<endl;
	
	//pq.isEmtpy() to check empty or not
	//pq.size()	to check size
		
	cout<<"\nMin Heap"<<endl;
	//max heap	
	priority_queue<int, vector<int>, greater<int>> p;
	
	p.push(3);
	p.push(4);
	p.push(1);
	p.push(5);
	
	cout<<"Element at the top : "<<p.top()<<endl;
	p.pop();
	cout<<"Element at the top : "<<p.top()<<endl;
	
	
	
	return 0;
}
