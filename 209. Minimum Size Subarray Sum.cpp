class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int left = 1;
    int right = nums.size()+1;
    bool checkans = false;

    while(left < right)
    {
        int mid = left + (right - left) / 2;

        if(slidewindow(nums, nums.size(), target, mid) == true)
        {
            checkans = true;
            right = mid;
        }
        else
            left = mid + 1;
    }
    if(checkans == true) 
    return left; 

    return 0;
    }

    bool slidewindow(vector<int> nums, int n, int target, int mid)
    {
        int sum = 0;
        for(int i = 0; i < mid; i++)
        sum += nums[i];

        int maxi = sum;
        int l = 0, r = mid;

        while(r < nums.size())
        {
            sum -= nums[l];
            l++;

            sum += nums[r];
            r++;

            maxi = max(sum, maxi);
        }
        return maxi >= target;
    }
};
