
class Solution{
  public:
    /*You are required to complete below method */
    
    void bfs(Node *root, int &maxi)
    {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int sum = 0;
        // sum = root->data;
        // maxi = max(sum, maxi);
        while(!q.empty())
        {
            Node* tmp = q.front();
            q.pop();
            
            if(tmp == NULL)
            {
                maxi = max(sum, maxi);
                sum = 0;
                if(!q.empty())
                q.push(NULL);
            }
            else
            {
                sum += tmp->data;
                
                if(tmp->left)
                q.push(tmp->left);
                
                if(tmp->right)
                q.push(tmp->right);
            }
        }
        
    }
    
    int maxLevelSum(Node* root) {
        // Your code here
        int maxi = INT_MIN;
        bfs(root, maxi);
        return maxi;
    }
};

