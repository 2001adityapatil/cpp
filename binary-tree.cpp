#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
		int data;
		node* left;
		node* right;
		
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

node* insert(node* root)
{
	int data;
	cout<<"Enter the data : "<<endl;
	cin>>data;
	
	if(data == -1)
	return NULL;
	
	root = new node(data);
	
	cout<<"Enter the data in left of "<<data<<" node : "<<endl;
	root->left = insert(root->left);
	
	cout<<"Enter the data in right of "<<data<<" node : "<<endl;
	root->right = insert(root->right);
	
	return root;
}

void inorder(node *root)
{
	if(root == NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void levelOrder(node *root)
{
	queue<node*> pq;
	
	pq.push(root);
	
	while(!pq.empty())
	{
		node *tmp = pq.front();
		cout<<tmp->data<<" ";
		pq.pop();
		
		if(tmp->left)
		pq.push(tmp->left);
		
		if(tmp->right)
		pq.push(tmp->right);
	}
}

int main(){
	
    node *root = NULL;
	
	root = insert(root);   
	
	cout<<"Inoder Traversal : "<<endl;
	inorder(root);
	
	cout<<"\nLevel Order Traversal : "<<endl;
	levelOrder(root);
	
	return 0;
}
//5 1 -1 -1 6 -1 -1
