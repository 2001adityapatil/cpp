class Solution {
public:
    int countEven(int num) {
    int c = 0;
    for(int i = 2; i <= num; i++)
    {
        int sum = 0;
        int n = i;
        while(n > 0)
        {
            int r = n%10;
            sum += r;
            n = n/10;
        }
        if(sum % 2 == 0)
        c++;
    }
    return c;   
    }
};
