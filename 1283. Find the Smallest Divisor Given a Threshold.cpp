class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1;
    int right = *max_element(nums.begin(), nums.end());
    int ans = right;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        // mid is giving <= threshold
        // but looking for even smaller, hence do
        // a search on left
        if(blackbox(nums, nums.size(), mid) <= threshold)
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    } 
    return ans;
    }

    int blackbox(vector<int> nums, int n, int divisor)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += (nums[i]/divisor);
            // for ceiling add one more
            if(nums[i]%divisor != 0)
            sum += 1;
        }
        return sum;
    }
};
