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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL)
        return ans;

        queue<TreeNode*> q;
        q.push(root);
        int c = 0;
        while(!q.empty())
        {
            int qsize = q.size();
            vector<int> ds;
            for(int i = 0; i < qsize; i++)
            {
                TreeNode *tmp = q.front();
                q.pop();

                ds.push_back(tmp->val);

                if(tmp->left)
                q.push(tmp->left);

                if(tmp->right)
                q.push(tmp->right);
            }
            if(c % 2 == 1)
            reverse(ds.begin(), ds.end());

            ans.push_back(ds);
            c++;
        }
        return ans;
    }
};
