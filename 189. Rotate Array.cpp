class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //   for(int i = 1; i <= k; i++)
    //   {
    //       int tmp = nums[nums.size()-1];
    //       for(int j = nums.size()-1; j >= 1; j--)
    //       {
    //           nums[j] = nums[j-1];
    //       }
    //       nums[0] = tmp;
    //   }  

    int n= nums.size();
    vector<int> ans(n);
      
    for(int i=0; i<n; i++)
    ans[(i+k)%n] = nums[i];
        
    nums=ans;


    // int a =k%v.size();
    //     reverse(v.begin(),v.end());
    //     reverse(v.begin(),v.begin()+a);
    //     reverse(v.begin()+a,v.end());
    }
};
