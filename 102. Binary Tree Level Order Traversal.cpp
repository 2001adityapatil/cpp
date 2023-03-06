class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(!root)return ans;
    bfs(root, ans);
    return ans;
    }

    void bfs(TreeNode *root, vector<vector<int>> &ans)
    {

        queue<TreeNode*> q;
        q.push(root);
        // q.push(NULL);

        while(!q.empty())
        {
            vector<int> ds;
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode *tmp = q.front();
                ds.push_back(tmp->val);
                q.pop();

                if(tmp->left)
                q.push(tmp->left);
                if(tmp->right)
                q.push(tmp->right);
            }
            ans.push_back(ds);
        }
    }
};
