int missingNumber(int A[], int N)
{
    // Your code goes here
    int totsum = (N*(N+1))/2;
    int sum = 0;
    for(int i = 0; i < N-1; i++)
    {
        sum += A[i];
        
    }
    
    // cout<<xor1<<" "<<xor2;
    return totsum-sum;
}
