// C++ program to solve Gold Mine problem
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	vector<int> nums = {16,14,4,3,8};
	
	for(int i = 0; i < nums.size()-1; i++)
	{
		for(int j = 0; j < nums.size()-1; j++)
		{
			if(nums[j] > nums[j+1])
				swap(nums[j], nums[j+1]);
		}
	}
	for(int i = 0; i < nums.size(); i++)
	cout<<nums[i]<<" ";
	
	
	
	return 0;
}
