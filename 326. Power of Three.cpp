// Solution: Similar to power of 2

class Solution {
public:
    bool isPowerOfThree(int n) {
        // for(int i = 0; i < 31; i++)
        // {
        //     long long int res = (long long int)pow(3, i);
        //     if(res == n)
        //     return true;
        // }
        // return false;

        if(n == 0)
        return false;
        while(n%3 == 0)
        n = n/3;

        if(n == 1)
        return true;
        else
        return false;
    }
};
