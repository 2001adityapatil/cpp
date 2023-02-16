// solution: take each element from the last of array and divide k so we get its unit place value then add them calculate the carry and there is carry then only add its remainder to sum and push the sum in the result array. Multiple cases fail if the k units are more than num vector then we push the k + carry in result array also if the if carry is not zero and units are then only push the carry in the result vector remember we are pushing the elements from back so we have to reverse the array tiime complexity will be for getting sum is O(n) + O(n) if k units are more and the reverse will take O(n)   

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> res = {};
        int carry = 0;
        int sum = 0;
       for(int i = 0; i < num.size(); i++)
       {
           sum = carry + sum;
           int num1 = num[num.size()-1-i];
           int num2 = k%10;
           sum = sum + num1+num2;
        	carry = sum/10;
           if(sum / 10 != 0)
           {
                sum = sum%10;               
           }
            res.push_back(sum);
           k = k /10;
            sum = 0;

       } 
       if(carry != 0 && k > 0)
       {
       		k = k + carry;
       		carry = 0;
	   }
       while(k > 0){
       	int num2 = k % 10;
       	res.push_back(num2);
       	k = k /10;
	   }
       if(carry != 0)
       res.push_back(carry);
       reverse(res.begin(), res.end());
       return res;


    }
};
