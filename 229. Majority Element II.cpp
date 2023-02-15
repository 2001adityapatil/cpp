// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
// Input: nums = [3,2,3]
// Output: [3]

// Solution 1: as name suggests there are two majority elements having count greater than n/3 times brute force copy all the elements into another vector sort the new
// vector keep all unique elements only  then loop over the new vector and count the number occurences in given vector and if it is greater than n/3 times push it in
// result vector and return the result vector;
// Solution 2: Boyer Moore voting algo where we are intialize two counter with 0 if count1 is 0 initialize first element to num1 and if it is similar to next element 
// in vector increase its count same for num2 and count2 and if it is not similar decrease the count by 1 for accuracy we are calculating the count of elements we get 
// if the count is greater than n/3 times push those elements in result vector and return result vector

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // vector<int> v = nums;
        // vector<int> res = {};
        // sort(v.begin(), v.end());
        // v.erase(std::unique(v.begin(), v.end()), v.end());
        // for(int i = 0; i < v.size(); i++)
        // {
        //     int c = count(nums.begin(), nums.end(), v[i]);
        //     if(c > nums.size()/3)
        //     res.push_back(v[i]);
        // }
        // return res;

        int num1 = INT_MAX;
        int num2 = INT_MAX;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == num1)
            {count1++;}
            else if(nums[i] == num2)
            {count2++;}
            else if(count1 == 0)
            {
                num1 = nums[i];
                count1++;
            }
            else if(count2 == 0)
            {
                num2 = nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        vector<int> res;
        count1 = 0;
        count2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == num1)
            count1++;
            if(nums[i] == num2)
            count2++;
        }
        if(count1 > nums.size()/3)
            res.push_back(num1);
        if(count2 > nums.size()/3)
            res.push_back(num2);

        return res;
    }
};
