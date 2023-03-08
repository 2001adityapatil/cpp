class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == NULL)
        return ans;
        
        // line node->val
        map<int, int> mp;
        // node line
        queue<pair<Node*, int>> q;
        // push the first node in the queue
        q.push({root, 0});
        
        while(!q.empty())
        {
            // get the first node and vertical line 
            auto it = q.front();
            Node *tmp = it.first;
            int line = it.second;
            q.pop();
            
            // if the line is already map don't map it again
            if(mp.find(line) == mp.end())
            mp[line] = tmp->data;
            
            // if node is present in left decrease the line by 1
            if(tmp->left)
            q.push({tmp->left, line-1});
            // if node is present in left increase the line by 1
            if(tmp->right)
            q.push({tmp->right, line+1});
        }
        // iterate over the map put all elements in vector
        for(auto p: mp)
        {
            ans.push_back(p.second);
        }
        return ans;
    }

};
