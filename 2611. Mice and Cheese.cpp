class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
    vector<pair<int, int>> res;
    for(int i = 0; i < reward1.size(); i++)
    {
      int diff = reward1[i] - reward2[i];
      res.push_back({diff, i});
    }

    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());
    int i = 0, sm = 0;
    for(i = 0; i < k; i++)
    {
      auto x = res[i];
      sm += reward1[x.second];
    }
    while(i < reward2.size())
    {
      auto x = res[i];
      sm += reward2[x.second];
      i++;
    }
    return sm;
    }
};
