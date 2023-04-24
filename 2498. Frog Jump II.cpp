class Solution {
public:
    int maxJump(vector<int>& stones) {

      if(stones.size() == 2)
      return abs(stones[0]-stones[stones.size()-1]);

      int maxi = 0;
      for(int i = 0; i < stones.size()-2; i++)
      {
        int fj = abs(stones[i] - stones[i+1]);
        int sj = abs(stones[i] - stones[i+2]);

        if(fj > sj)
        maxi = max(maxi, fj);
        else
        maxi = max(maxi, sj);
      }  
      // cout<<maxi;
      return maxi;
    }
};
