// Solution: creating two arrays bcoz if root val is 2digits makes a problem in r code call the preorder traversal as it is a preorder traversal push root node val in
// res vector checking if root node reaches last node or not if reach then extract all the string that are push in res vector and creat the string loop it n-1 times then
// last value u have to append or if n times then pop 2 values from string and push into ans vector for the remaining it will first go in left of binary tree till root 
// is null once it reaches it will add the string after it will check in right of root and pop last value from vector if there is value in right it will in its left and
// right and will all string in ans vec as it reach to null after coming from right recursion it will pop the value main logic thats how we traverse through all nodes

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
