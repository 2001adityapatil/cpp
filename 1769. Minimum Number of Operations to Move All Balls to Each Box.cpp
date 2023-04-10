class Solution {
public:
    vector<int> minOperations(string boxes) {
    vector<int> ans;
    for(int i = 0; i < boxes.size(); i++)
    {
        int sm = 0;
        for(int j = 0; j < boxes.size(); j++)
        {
            if(i == j || boxes[j] == '0')
            continue;
            else
                sm += abs(i-j);
        }
        ans.push_back(sm);
    }   
    return ans;
    }
};
