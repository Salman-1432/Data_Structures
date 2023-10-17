#include <iostream>
using namespace std;
struct node
{
    struct node *left;
    int data;
    struct node *right;

public:
    node()
    {
        left = NULL;
        right = NULL;
        data = 0;
    }
    node(int x)
    {
        left = NULL;
        right = NULL;
        data = x;
    }
};
class BST
{
    node *root;

public:
     BST()
     {
        root=NULL;
     }
    void insert(int data)
    {
        node *temp = new node(data);
        if (root == NULL)
        {
            root = temp;
            return;
        }
        // int data1;
        // cout<<"Enter the second node data: ";
        // cin>>data1;
        // node * temp2 = new node(data1)
        else{
        node* parent,*temp2=root;
        while(temp2!=NULL)
        {
         parent=temp2;
            if (parent->data > data)
            temp2->left = temp;
            else
            temp2->right = temp;
        }
        if(parent->data<data)
        {
            parent->right=temp;
        }
        else
        parent->left=temp;
    }
    }
   void display()
   {
    node* temp2=root;
    while(temp2!=NULL)
    {
        cout<<temp2->data;
     temp2=temp2->left;
    }
   }
};
int main()
{
    BST b;
    b.insert(45);
    b.insert(35);
    b.insert(25);
    b.display();
}