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
 unordered_map<int,int>m;
    TreeNode* solve(vector<int>& inorder,vector<int>& postorder,int start,int end,int &postIndex){
        if(start>end) return NULL;
         int inorderIndex = m[postorder[postIndex]];

        TreeNode* root = new TreeNode(inorder[inorderIndex]);    
        
        (postIndex)--;
      root->right=solve(inorder,postorder,inorderIndex+1,end,postIndex);
        root->left=solve(inorder,postorder,start,inorderIndex-1,postIndex);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        for(int i=0;i<inorder.size();i++){
           m[inorder[i]] = i;
            
        }
        int postIndex=postorder.size()-1;
        return solve(inorder,postorder,0,postorder.size()-1,postIndex);
    }
};
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//     map<int, int> mp;
//     for(int i = 0; i < inorder.size(); i++)
//     mp[inorder[i]] = i;

//     TreeNode *root = newTree(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1, mp);    

//     return root;
//     }

//     TreeNode *newTree(vector<int> inorder, vector<int> postorder, int instart, 
//     int inend, int poststart, int postend, map<int,int> mp)
//     {
//         if(instart > inend || poststart > postend)
//         return NULL;

//         // TreeNode *tmp = new TreeNode(postorder[])
//         TreeNode *tmp = new TreeNode(postorder[postend]);
        
//         int root = mp[postorder[postend]];
//         int numsleft = root - instart;

//         tmp->left = newTree(inorder, postorder, instart, root-1, poststart,
//         poststart+numsleft-1, mp);

//         tmp->right = newTree(inorder, postorder, root+1, inend, poststart+numsleft
//         , postend-1, mp);

//         return tmp;
//     }
// };
