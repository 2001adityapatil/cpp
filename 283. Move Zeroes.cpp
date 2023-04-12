class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
    // if(nums.size() == 1)
    // return;
    // int t = 0;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i] == 0)
    //     {
    //         nums.erase(nums.begin() + i);
    //         t++;
    //     }
    // }
    // while(t--)
    // nums.push_back(0);

    int j = -1;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0)
        {
            j = i;
            break;
        }
    }
    if(j == -1)
    return;
    for(int i = j+1; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }


    }
};
