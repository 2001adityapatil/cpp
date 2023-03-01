class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        // if(root == NULL)
        // 
        vector<string> ans;
        // string str = to_string(root->val);
        string str = "";
        vector<string> res; 
        preorder(root, ans, res);
        return ans;
    }

    void preorder(TreeNode *root, vector<string> &ans, vector<string> &res)
    {
        if(root == NULL)
        return;

        // str = str + to_string(root->val); 
        res.push_back(to_string(root->val));
        if(root->left == NULL && root->right == NULL)
        {   
            string ms = "";
            for(int i = 0; i < res.size()-1; i++)
            {
                ms = ms + res[i] + "->";
            }
            // ms.pop_back();
            // ms.pop_back();
            ms = ms + res[res.size()-1];
            ans.push_back(ms);
        }
        preorder(root->left, ans, res);
        preorder(root->right, ans, res);
        res.pop_back();
    }
};
