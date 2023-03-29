#include <bits/stdc++.h> 

double blackbox(double mid, int n)
{
	double ans = 1.0;
	for(int i = 0; i < n; i++)
	ans *= mid;

	return ans;
}

double findNthRootOfM(int n, int m) {
	// Write your code here.

	double left = 1.0;
	double right = m;
	double eps = 1e-7;

	while((right - left) > eps)
	{
		double mid = (left + right) / 2.0;

		if(blackbox(mid, n) < m)
		left = mid;
		else
		right = mid;
	}
	return left;
}
