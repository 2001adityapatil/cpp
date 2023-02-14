class Solution {
    // double val(double x, int n, double sum)
    // {
	//     if(n == 0)
	// 	    return sum;	
	
    // 	return val(x, n-1, sum*x);		
    // }
public:
    double myPow(double x, int n) {

    double sum = 1;
    long long m = n;
	cout<<fixed<<setprecision(5);
    if(m < 0) m = -1 * m;
    while(m)
    {
        if(m%2 == 1)
        {
            sum = sum * x;
            m = m - 1;
        }
        else
        {
            x = x * x;
            m = m/ 2;
        }
    }
    if(n < 0)
		sum = 1.0/sum;

	
    return sum;

    

    // recursion
    // double sum = 1;
	// cout<<fixed<<setprecision(5);

    // sum = val(x, abs(n), sum);

    // if(n < 0)
	// sum = 1/sum;
	
    // return sum;
        
    //brute force
    // double sum = 1.00000;
	// cout<<fixed<<setprecision(5);
	
	// for(int i = 0; i < abs(n); i++)
	// 	sum = sum * x;
	
    // if(n < 0)
	// 	sum = 1/sum;
	
    //     return sum;
    }
};
