/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// Solution: to keep the track of parent traverse in level order and readily move left right and in top check if it is visited to get the proper path or count thats it

class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    unordered_map<TreeNode*, TreeNode*> parent;
    mapParents(root, parent);

    int dis = 0;

    unordered_map<TreeNode*, bool> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited[target] = true;

    while(!q.empty())
    {
        int size = q.size();
        if(dis == k)
        break;
        for(int i = 0; i < size; i++)
        {
            TreeNode* tmp = q.front();
            q.pop();

            if(tmp->left && !visited[tmp->left])
            {
                q.push(tmp->left);
                visited[tmp->left] = true;
            }

            if(tmp->right && !visited[tmp->right])
            {
                q.push(tmp->right);
                visited[tmp->right] = true;
            }
            
            if(parent[tmp] && !visited[parent[tmp]])
            {
                q.push(parent[tmp]);
                visited[parent[tmp]] = true;
            }
        }
        dis++;
    }
    vector<int> res;
    while(!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();
        res.push_back(curr->val);
    }    
    return res;
    }

    void mapParents(TreeNode *root, unordered_map<TreeNode*, TreeNode*> &parent)
    {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* tmp = q.front();
            q.pop();

            if(tmp->left)
            {
                q.push(tmp->left);
                parent[tmp->left] = tmp;
            }
            if(tmp->right)
            {
                q.push(tmp->right);
                parent[tmp->right] = tmp;
            }
        }
    }


};
