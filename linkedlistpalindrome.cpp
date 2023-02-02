bool compute(Node* root)
{
   //Your code goes here
   string str1 = "";
   while(root != NULL)
   {
       str1 = str1 +  root->data;
       root = root -> next;
   }
   string str = str1;
   reverse(str.begin(), str.end());
   
   if(str == str1)
   return true;
   else
   return false;
}
