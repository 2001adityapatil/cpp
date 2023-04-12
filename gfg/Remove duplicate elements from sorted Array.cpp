class Solution{
public:
    int remove_duplicate(int nums[],int n){
        // code here
        sort(nums, nums+n);
	    int c = 0;
	    for(int i = 1; i < n; i++)
	    {
		    if(nums[i] != nums[i-1])
		    {
		        c++;
		        nums[c] = nums[i];
		    }
	    }
	    return c+1;
    }
};
