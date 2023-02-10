class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    
    // Very simple approach using the stl library
    // next_permutation(nums.begin(), nums.end());

    // step1: traverse from right until arr[k] < arr[k+1]
    // step2: traverse from right until arr[l] > arr[k]
    // step3: swap(arr[k],arr[l])
    // step4: reverse from k++ index


    int n = nums.size(), l, k;

    for(k = n - 2; k >= 0; k--)
    {
        if(nums[k] < nums[k+1])
        break;
    }
    if(k < 0)
        reverse(nums.begin(), nums.end());
    else 
    {
        for(l = n - 1; l > k; l--)
        {
            if(nums[l] > nums[k])
            break;
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
}
};
