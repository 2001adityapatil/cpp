class Solution {
public:
    string addStrings(string num1, string num2) {
        int n;
        if(num1.length() < num2.length())
        n = num1.length();
        else
        n = num2.length();

        string str = "";
        int carry = 0;
        int sum = 0;
        int i;
        for(i = 0; i < n; i++)
        {
            if(num1[num1.length()-1-i] != ' ')
            sum += int(num1[num1.length()-1-i]) - 48;

            if(num2[num2.length()-1-i] != ' ')
            sum += int(num2[num2.length()-1-i]) - 48;

            sum = carry + sum;

            
            carry = sum / 10;
            if(sum / 10 != 0)
            sum = sum % 10;

            str = str + to_string(sum);
            sum = 0;
        }

        
        
        if(num1.length() > num2.length())
        {
        	for(; i < num1.length(); i++)
        	{
        		sum += int(num1[num1.length()-1-i]) - 48;
        		sum = carry + sum;
        		carry = sum / 10;
            	if(sum / 10 != 0)
            	sum = sum % 10;

            	str = str + to_string(sum);
            	sum = 0;
			}
		}
        else
        {
        	for(; i < num2.length(); i++)
        	{
        		sum += int(num2[num2.length()-1-i]) - 48;
        		sum = carry + sum;
        		carry = sum / 10;
            	if(sum / 10 != 0)
            	sum = sum % 10;

            	str = str + to_string(sum);
            	sum = 0;
			}
		}
        
        if(carry != 0)
        str = str + to_string(carry);
        
        
        
        reverse(str.begin(), str.end());

        return str;
    }
};
