
// Not optimal solution use linked list cycle solution work on it

class Solution {


public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                num = nums[i];
                break;
            }
        }
        return num;

        

        
    }
};
