class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
    sort(deck.begin(), deck.end());
    vector<int> ans(deck.size(), 0);
    queue<int> q;
    int j = 0;
    while(j < deck.size())
    {
        q.push(j);
        j++;
    }    

    for(int i = 0; i < deck.size(); i++)
    {
        ans[q.front()] = deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return ans;
    }
};
