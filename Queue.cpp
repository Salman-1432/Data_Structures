#include<iostream>
#include<queue>// library of the queue
using namespace std;
class node
{
	public:
	int data;// int data type
	node*left;// pointing to left child
	node*right;// pointing to right child
	node(int d) //parameteraized costructor
	{
		this->data=d;// current object
		this->left=NULL;// current null
		this->right=NULL;// current null
	}
};
node*buildTree(node*root)// return type node // parameter passing root which 
//storing data
{
	cout<<"Enter the data:"<<endl;
	int data;
	cin>>data;
	root=new node(data);// new data going in the root 
	if(data==-1)// data is -1 then return value null
	{
		return NULL;
	}
	cout<<"Enter data for inserting for left:"<<data<<endl;
	root->left=buildTree(root->left);// recursion function to the left child
	cout<<"Enter data for inserting for right:"<<data<<endl;
	root->right=buildTree(root->right);// recursion function to the right child
	return root;// return type root which has store the new data	
}
void levelorderTraversal(node*root)// level order mainten function
{
	queue<node*> q;// container adaptors that operate first in first out(fifo)
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node*temp=q.front();
		q.pop();
		if(temp==NULL)// purana level traverse ho chuka hai
		{
			cout<<endl;
			if(!q.empty())// queue still has some child nodes
			{
				q.push(NULL);		
			}	
		}
		else
		{
			cout<<temp->data<<" ";// print the node of the function
			if(temp->left)// temp pointing of the left side of the tree
			{
				q.push(temp->left);// pusing left node of the tree
			}
			if(temp->right)// tmep pointing of the right side of the tree
			{
				q.push(temp->right);// pushing left node of the tree
			}
		}
	}
}
int preorder(node*root)// function
{
	if(root==NULL)
	{
		return 0;	
	}
	cout<<root->data<<" ";// print
	preorder(root->left);// recursion
	preorder(root->right);//recursion
}
int inorder(node*root)// function
{
	if(root==NULL)
	{
		return 0;
	}
	inorder(root->left);// recursion
	cout<<root->data<<" ";// print
	inorder(root->right);// recursion
}
int postorder(node*root)// function 
{
	if(root==NULL)
	{
		return 0;
	}
	postorder(root->left);// recursion
	postorder(root->right);// recursion
	cout<<root->data<<" ";// print
}
node*buildFormlevelorder(node* root)// function
{
	queue<node*> q;//container adaptors that operate first in first out(fifo)
	cout<<"Enter the data for root:"<<endl;
	int data;
	cin>>data;
	root=new node(data);// storing the data in root
	q.push(root);// pusing the data
	while(!q.empty())// NUll is then condition is true
	{
		node*temp=q.front();// temprary veriable pointer front node of the tree
		q.pop();//deleting the element of the tree 
		cout<<"Enter left node for:"<<temp->data<<endl;
		int leftdata;
		cin>>leftdata;
		if(leftdata!=-1)// leftdata is -1 the condition is true // but just at time condition is false
		{
			temp->left=new node(leftdata);// new data is store in left node
			q.push(temp->left);// new data is store in left node
		}
		cout<<"Enter right node for:"<<temp->data<<endl;
		int rightdata;
		cin>>rightdata;
		if(rightdata!=-1)
		{
			temp->right=new node(rightdata);// new data is store in left node
			q.push(temp->right);;// new data is store in left node
		}
	}
}
int main()
{
	// create root NUll;
	node*root=NULL;
	/*root=buildTree(root);
	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	levelorderTraversal(root);
	cout<<"preorder traversal is:"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"inorder traversal is:"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"postorder traversal is:"<<endl;
	postorder(root);*/
	// 1 3 7 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
	buildFormlevelorder(root);
	levelorderTraversal(root);
	
	
}