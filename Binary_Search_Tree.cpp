#include <iostream>
using namespace std;
struct node
{
    struct node *left;// for left node
    int data;// for data of the node
    struct node *right;// for right node

public:// function
    node()// defualt costructor
    {
        left = NULL;// left null
        right = NULL;// right null
        data = 0;// data is zero
    }
    node(int x)// parameterized
    {
        left = NULL;// left null
        right = NULL;// right null
        data = x;// data is zero
    }
};
class BST// class of the binary search
{
    public:// 
    node *root;// root is doning point of the first node of the tree
     BST()
     {
        root=NULL;// defualt costtructor
     }
    void insert(int data)// insert the data of the 
    {
        node *temp = new node(data);// stor the data in the constructor 
        if (root == NULL)// root is null than root will be point of the temp
        {
            root = temp;// temp assign in root;
            return;// return type
        }
        // int data1;
        // cout<<"Enter the second node data: ";
        // cin>>data1;
        // node * temp2 = new node(data1)
        else
        {
        node *parent,*temp2=root;// root will be assign in parent and temp2 that both pointing in fist node of the root
        while(temp2!=NULL)// they wil be work then condition is false the out 
        {
            parent=temp2;// tmep2 is assign in parent
            if (parent->data > data)// parent is greater then fromt the data condition is true
                  temp2=temp2->left;// left of temp2 is assign in temp2
            else
                temp2=temp2->right;// right of temp2 is assign in temp2
        }
        if(parent->data<data)// after that parent data is less than of the data than
            parent->right=temp;// parent right is point the right of the parent which is null
        else
            parent->left=temp;//parent left is point the right of the parent which is null
    }
    }
   /* void display()
   {
    node* temp2=root;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->left;
    } 
   }*/
   void search(node*temp)
   {
        int item;
        cout<<"Enter the item: ";
        cin>>item;
        temp=root;
        while(temp!=NULL)
        {
            if(temp->data>item)
            {
                temp=temp->left;
            }
            if(temp->data<item)
            {
                temp = temp->right;
            }
            if(temp->data == item)
            {
                cout<<temp->data<<" Found"<<endl;
                return;
            }
            else
            {
                cout<<"Not Found"<<endl;
                return;
            }
        }
   }
   void preorder(node*temp)// for pre order
   {
        if(temp==NULL)
        {
            return ;
        }
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
   }
   void inorder(node*temp)// for in order
   {
        if(temp==NULL)
        {
            return ;
        }
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
   }
   void postorder(node*temp)// for post order
   {
        if(temp==NULL)

        {
            return ;
        }
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data<<" ";
   }
};
int main()
{
    BST b;
    int choice ,data;
    while(1)
    {
        cout<<"1:Enter the insert:"<<endl;
        cout<<"2:Enter the preorder:"<<endl;
        cout<<"3:Enter the inorder:"<<endl;
        cout<<"4:Enter the postorder:"<<endl;
        cout<<"5:Search:"<<endl;
        cout<<"6:Exit"<<endl;
        cout<<"Enter the choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the data:"<<endl;
                   cin>>data;
                   b.insert(data);
                   break;
            case 2:cout<<"preorder:"<<endl;
                   b.preorder(b.root);
                   break;
            case 3:cout<<"inorder:"<<endl;
                   b.inorder(b.root);
                   break;
            case 4:cout<<"postorder:"<<endl;
                   b.postorder(b.root);
                   break;
            case 5:b.search(b.root);
                    break;
            case 6:exit(0);
            default:
                   cout<<"wrong choice:"<<endl;
        }
    }
    // 15,9,20,5,11,16,25,4,6,10;
    /* b.insert(15);
    b.insert(9);
    b.insert(20);
    b.insert(5);
    b.insert(11);
    b.insert(16);
    b.insert(25);
    b.insert(4);
    b.insert(6);
    b.insert(10);
    b.preorder(b.root);
    cout<<endl;
    b.inorder(b.root);
    cout<<endl;
    b.postorder(b.root);
 */
    
}