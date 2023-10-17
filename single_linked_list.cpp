#include<iostream>
using namespace std;
class SingleLT
{
    public:
    struct node
    {
        int data;
        struct node *next; 
    };
    node*head;
    SingleLT()
    {
        head=NULL;
    }
    void Traversal(int);
    int Searching(struct node*head,int);
    void count();
    void Insertion();
    int Deletion();
    void Creation();
    void Reversal();
};
void SingleLT::Traversal(int x)
{
    struct node*p;
    if(head=NULL)
    {
        cout<<"list is Empty:"<<endl;
        return ;
    }
    p=head;
    p=new node();
    p->data=x;
    p->next=NULL;
    while(p!=NULL)
    {
        cout<<"val show:"<<p->data<<endl;
        p=p->next;
    }
}
int SingleLT::Searching(struct node*head,int key)
{
    struct node*p=head;
    int pos=1;
    while(p!=NULL)
    {
        if(p->data==key)
        {
            cout<<"position:"<<pos<<endl;
            //return ;
        }
        p=p->next;
        pos++;
    }
    cout<<"position is not found:"<<endl;
}
void SingleLT::count()
{
    struct node*p;
    p=head;
    int ct=1;
    while(p!=NULL)
    {
        p=p->next;
        ct++;
    }
    cout<<"count is equal:"<<ct<<endl;
}
int main()
{
    SingleLT t1;
    struct node*head;
    //struct node*p;
   // p=head;
    cout<<"name of the function traversal:"<<endl;
    t1.Traversal(45);
    t1.Traversal(48);
    t1.Traversal(78);
    t1.Traversal(89);
    //cout<<"name of the function searching:"<<endl;
   // t1.Searching(head,78);
    t1.count();
}