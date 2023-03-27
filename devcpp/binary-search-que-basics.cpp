#include<bits/stdc++.h>
using namespace std;

//int firstOcc(int start, int end, vector<int> res, int target)
//{
//	int left = start;
//	int right = end-1;
//	int ans = -1;
//	while(left <= right)
//	{
//		int mid = (left+right)/2;
//		
//		if(res[mid] == target)
//		{
//			ans = mid;
//			right = mid - 1;
//			continue;
//		}
//		if(res[mid] > target)
//		right = mid - 1;
//		else
//		left = mid + 1;
//	}
//	return ans;
//}
//
//int lastOcc(int start, int end, vector<int> res, int target)
//{
//	int left = start;
//	int right = end-1;
//	int ans = -1;
//	while(left <= right)
//	{
//		int mid = (left+right)/2;
//		
//		if(res[mid] == target)
//		{
//			ans = mid;
//			left = mid + 1;
//			continue;
//		}
//		if(res[mid] > target)
//		right = mid - 1;
//		else
//		left = mid + 1;
//	}
//	return ans;
//}

//int lb(int start, int end, vector<int> res, int target)
//{
//	int left = start;
//	int right = end;
//	int ans = res.size();
//	
//	while(left <= right)
//	{
//		int mid = (left+right)/2;
//		
//		if(res[mid] >= target)	
//		{
//			ans = mid;
//			right = mid - 1;
//		}
//		else
//			left = mid + 1;
//	} 
//	return ans;
//}

//	lower bound using stl in cpp
//int lb(int start, int end, vector<int> res, int target)
//{
//	vector<int>::iterator it;
//	it = lower_bound(res.begin(), res.end(), target);
//	int ans = it - res.begin(); 
//	return ans;
//}

//int ub(int start, int end, vector<int> res, int target)
//{
//	int left = start;
//	int right = end;
//	int ans = res.size();
//	
//	while(left <= right)
//	{
//		int mid = (left+right)/2;
//		
//		if(res[mid] <= target)
//		left = mid + 1;
//		else
//		{
//			ans = mid;
//			right = mid - 1;
//		}	
//	} 
//	return ans;
//}

//	upper bound using stl
//int ub(int start, int end, vector<int> res, int target)
//{
////	vector<int>::iterator it;
//	int ans = upper_bound(res.begin(), res.end(), target) - res.begin();
////	int ans = it - res.begin();
//	return ans;
//}

//int occur(vector<int> res, int target)
//{
//
//	int left = lower_bound(res.begin(), res.end(), target) - res.begin();
//	int right = upper_bound(res.begin(), res.end(), target) - res.begin();
//
//	return right - left;
//}

//int sq(int n)
//{
//	int left = 1;
//	int right = n;
//	int ans = n;
//	while(left <= right)
//	{
//		int mid = (left+right)/2;
//		
//		if(mid*mid >= n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			ans = mid;
//			left = mid + 1;
//		}
//	}
//	return ans;
//}

int main()
{

//	vector<int> res = {1,1,3,3,3,3,3,4,5};
	
//	cout<<"First Occurence of 3 : "<<firstOcc(0, res.size(), res, 3)<<endl;
//	cout<<"last Occurence of 3 : "<<lastOcc(0, res.size(), res, 3);

//	lower bound of 3 : index 2
//  lower bound of 1 : index 0
//	lower bound of 2 : index 2
//	lower bound of 6 : res.size() nth index

//	cout<<"Lower bound of 3 : "<<lb(0, res.size()-1, res, 3)<<endl;
//	cout<<"Lower bound of 1 : "<<lb(0, res.size()-1, res, 0)<<endl;
//	cout<<"Lower bound of 2 : "<<lb(0, res.size()-1, res, 2)<<endl;
//	cout<<"Lower bound of 6 : "<<lb(0, res.size()-1, res, 6)<<endl;
	
//	upper bound of 3 : index 7
//  upper bound of 1 : index 2
//	upper bound of 2 : index 2
//	upper bound of 6 : res.size() nth index

//	cout<<"upper bound of 3 : "<<ub(0, res.size()-1, res, 3)<<endl;
//	cout<<"upper bound of 1 : "<<ub(0, res.size()-1, res, 1)<<endl;
//	cout<<"upper bound of 2 : "<<ub(0, res.size()-1, res, 2)<<endl;
//	cout<<"upper bound of 6 : "<<ub(0, res.size()-1, res, 6)<<endl;

//	Count the number of occurences of 3
//	cout<<"Occurences of 3 times : "<<occur(res, 3);

//	integer square root of number
//	int n = 26;
//	cout<<"square root of number 26 : "<<sq(n);
	
	return 0;
}
