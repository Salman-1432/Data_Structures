#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    
    node()
    {
        data=0;
        next=NULL;
    }
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class LT
{
    public:
    node*head;
 
    LT()
    {
        head=NULL;
    }
    void insertdata(int);
    int addBE(int,int);
    int deletedata(int );
    void display();
};
void LT::insertdata(int data)
{
    node*newnode=new node(data);
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
int LT::addBE(int data,int index)
{
    node*newnode=new node(data);
    node*temp=head;
    for(int i=0;i<index;i++)
    {
        //cout<<temp->data<<endl;
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int LT::deletedata(int index)
{
    node*temp=head;
    for(int i=0;i<index;i++)
    {
        temp=temp->next;
    }
    temp->next=head;
    head=head->next;
    temp=head;
}
void LT::display()
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"liked list is empty:"<<endl;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    LT l1;
    l1.insertdata(10);
    l1.insertdata(100);
    l1.insertdata(1000);
    l1.addBE(450,2);
    l1.deletedata(1);
    l1.display();
}
