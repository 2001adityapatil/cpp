/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    // vertical level value
    map<int, map<int, multiset<int>>> mp;
    // node verticalno levelno
    queue<pair<TreeNode*, pair<int,int>>> q;
    // insert the first node at level 0 and vertical 0
    q.push({root,{0,0}});
    while(!q.empty())
    {
        // get the first pair from queue
        auto p = q.front();
        // first node will in first part of pair
        TreeNode *tmp = p.first;
        q.pop();

        // index to store the value will get from x and y which in second pair
        int x = p.second.first;
        int y = p.second.second;
        // inserting in multiset
        mp[x][y].insert(tmp->val);

        //if their is left then add left and decrease x by 1 and increase level by 1
        if(tmp->left)
        q.push({tmp->left,{x-1, y+1}});
        //if their is left then add left and increase x by 1 and increase level by 1
        if(tmp->right)
        q.push({tmp->right, {x+1, y+1}});
    }

    vector<vector<int>> ans;
    // push all values from map to ans vector
    for(auto p: mp)
    {
        vector<int> row;
        for(auto q: p.second)
        row.insert(row.end(), q.second.begin(), q.second.end());

        ans.push_back(row);
    }
    return ans;
    }
};
