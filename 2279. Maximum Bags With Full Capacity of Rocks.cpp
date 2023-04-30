class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks)     {   
        vector<int> res;
        for(int i = 0; i < capacity.size(); i++)
        {
            if(additionalRocks != 0 && rocks[i] < capacity[i])
            {
                int tmp = capacity[i] - rocks[i];
                res.push_back(tmp);
            }
        }
        int count = 0;
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++)
        {
            if(additionalRocks >= res[i])
            {
                additionalRocks -= res[i];
                count++;
            }
        }
        // instead of this put if condition in above for loop and increase cnt     if       res[i] == 0 
        return count += (rocks.size()-res.size());

    }
};
