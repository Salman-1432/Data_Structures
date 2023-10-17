/* #include<iostream>
using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
};
node*newnode(int data)
{
    node*element =new node();
    element->data=data;
    element->right=NULL;
    element->right=NULL;
    return element;
}
void printinoder(node*temp)
{

}
int main()
{
    node*root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->right->right=newnode(5);
    printoeder(root);
}
 */
#include<iostream>
using namespace std;
class tree
{
    int data;
    tree*lf;
    tree*rt;
    public:
    tree()
    {
        lf=NULL;
        rt=NULL;
    }
    void create(int data);
    void display();
};
tree *root=NULL;
void tree::create(int x)
{
    tree*newnode=new tree();
    newnode->data=x;
    newnode->lf=NULL;
    newnode->rt=NULL;
    if(root==NULL)
    {    
        root=newnode;
        return ;
    }
    if(root->lf==NULL)
    {
        root->lf=newnode;
    }
    if(root->rt==NULL)
    {
        root->rt=newnode;
    }
    tree *temp=root;
    while(temp!=NULL)
    {
        if(temp->lf!=NULL)
        {
            temp=temp->lf;
        }
        if(temp->lf!=NULL)
        {
            temp=temp->rt;
        }
    }
}
void tree::display()
{
    cout<<"salman:"<<endl;
    tree*temp=root;
    if(root==NULL)
    {
        cout<<"root is empty:"<<endl;
    }
    while(temp!=NULL)
    {
        if(temp->lf==NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->lf;
        }
        if(temp->rt==NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->lf;
        }
    }
}
int main()
{
    tree t1;
    t1.create(10);
    t1.create(20);
    t1.create(30);
    t1.display();
}


















