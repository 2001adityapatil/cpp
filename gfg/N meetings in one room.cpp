// There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
// What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

// Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting


#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

// Solution: sort the array according to end/finish time for that traverse the both array same time push the value from end array first and then from start array
// push it into 2d array sort the array it will sort according to end array. Now push the first array bcoz the first meet going to takes place take the end time
// of the first meet in val variable now if the end time is less than val i.e. start time of second time then push the values in result vector or simply we can
// count that values or else continue keep the end value as same and thats how we can get the max meets in one room.
 
int main()
{
	int n = 6;
	int start[] = {1,0,3,8,9,8};
	int end[] =  {2,6,4,9,7,9};
	vector<vector<int>> res;
	for(int i = 0; i < n; i++)
	{
		vector<int> tmp;
		tmp.push_back(end[i]);
		tmp.push_back(start[i]);
		res.push_back(tmp);
	}
	sort(res.begin(), res.end());
	
	vector<vector<int>> result;
	result.push_back(res[0]);
	int val = res[0][0];
	for(int i = 1; i < n; i++)
	{
		vector<int> tmp;
		if(val < res[i][1])
		{
			vector<int> tmp;
			tmp.push_back(res[i][0]);
			tmp.push_back(res[i][1]);
			result.push_back(tmp);
		}
		else
		continue;
		val = res[i][0]; 
	}


	for(int i = 0; i < result.size(); i++)
	{
		for(int j = 0; j < result[i].size(); j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
//	
//	cout<<result.size();

	
	return 0;
}
