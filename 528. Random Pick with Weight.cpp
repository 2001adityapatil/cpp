class Solution {
public:
    vector<int> dumy;
    Solution(vector<int>& w) {
        dumy.push_back(w[0]);
        for(int i = 1; i < w.size(); i++)
        dumy.push_back(w[i]+dumy.back());
    }
    
    int pickIndex() {
       int n = rand() % (dumy.back());
       return upper_bound(dumy.begin(), dumy.end(), n) - dumy.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
