// C++ program to solve Gold Mine problem
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int element, vector<int> nums)
{
	int left = 0;
	int right = nums.size()-1;
	int mid;
	
	while(right >= left)
	{
		mid	= (left+right)/2;
		
		if(nums[mid] == element)
		return mid;
		
		if(element > nums[mid])
		left = mid+1;
		else
		right = mid-1;
	}
	return -1;
}

int main()
{
	
	vector<int> nums = {16,14,4,3,8};
	int search;
	
	cout<<"Enter the element to search : ";
	cin>>search;
	
	cout<<"\nElement found at index "<<binarySearch(search, nums)<<" using binary search";
	
	
	
	return 0;
}
