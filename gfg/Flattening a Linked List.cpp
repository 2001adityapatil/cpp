Node *mergeLists(Node *a, Node *b)
{
    Node *tmp = new Node(0);
    Node *start = tmp;
    
    while(a != NULL && b != NULL)
    {
        if(a->data < b->data)
        {
            tmp->bottom = a;
            tmp = tmp->bottom;
            a = a->bottom; 
        }
        else
        {
            tmp->bottom = b;
            tmp = tmp->bottom;
            b = b->bottom;
        }
    }
    
    if(a != NULL) 
    tmp->bottom = a;
    else
    tmp->bottom = b;
    
    return start->bottom;
}

Node *flatten(Node *root)
{
   // Your code here   
   if(root == NULL || root->next == NULL)
   return root;
   
  root->next = flatten(root->next);
   
  root = mergeLists(root, root->next);
   
  return root;
    // return mergeLists(root, flatten(root->next));
}
