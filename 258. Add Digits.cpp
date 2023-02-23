// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it


class Solution {
public:
    int addDigits(int num) {
        int sum = num;
        while(sum/10 != 0)
        {
            sum = 0;
            while(num > 0)
            {
                sum = sum + num%10;
                num = num/10;
            }
            num = sum;
        }
        // cout<<12/10;
        return sum;
    }
};
