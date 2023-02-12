//Brute force code studio 11 test cases

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
	// Write your code here 
	sort(A.begin(), A.end());
	pair<int, int> num;
    // int num1, num2;
	for(int i = 0; i < n -1; i++)
	{
		if(A[i] == A[i+1])
		{
			num.second = A[i];
			A[i+1] = -1;
			break;
		}
	}
	A.erase(remove(A.begin(), A.end(), -1), A.end());
		// sort(A.begin(), A.end());

    for(int i = 0; i < n; i++)
    {
        if(A[i] != i+1)
		{
			num.first = i+1;
			break;
		}
    }

	return num;
	
}
