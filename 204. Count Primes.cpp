class Solution {
public:
    int countPrimes(int n) {
    vector<bool> sieve(n+1, true);
	sieve[0] = false;
	sieve[1] = false;
	
	for(int i = 2; i*i<=n; i++)
	{
		if(sieve[i] == true)
		{
			for(int j = i*i; j <= n; j+=i)
			sieve[j] = false;
		}
	}
	return count(sieve.begin(), sieve.end()-1, true);
    }

};
