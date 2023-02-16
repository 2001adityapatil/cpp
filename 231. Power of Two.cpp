// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1

// Solution 1: traversing through the array we know the max value to 31 calculating the value of each i to the power 2 till we get the desired value then return true
// Solution 2: if it exact power value then its remainder at last will be always 1 when it is divided by 2 again and again and if not 1 then return false. 

class Solution {
public:
    bool isPowerOfTwo(int n) {
    //   for(int i = 0; i < 31; i++)
    //   {
    //       long long int res = (long long int)pow(2, i);
    //       if(res == n)
    //       return true;
    //   }
    //   return false;

        if(n == 0)
        return false;
        while(n%2 == 0)
        n = n/2;

        if(n == 1)
        return true;
        else
        return false;


    }
};
