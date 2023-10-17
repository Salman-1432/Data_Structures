#include<iostream>
using namespace std;
class Linkedlist
{
    struct node
    {
        int data;
        node*next;
    };
    node*head;
public:
    Linkedlist()
    {
        head=NULL;
    }
    void insertlist(int );
    void deletelist();
    void count();
    void display();
};
void Linkedlist::insertlist(int x)
{
    node *newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void Linkedlist::deletelist()
{
    node *temp = head;
    head = head->next;
    temp = head;
}
void Linkedlist::display()
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"List is Empty:"<<endl;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void Linkedlist::count()
{
    node*temp=head;
    int ct=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        ct++;
    }
    cout<<"count of the number:"<<ct<<endl;
}
int main()
{
    Linkedlist l2;
    int A[5];
    cout<<"Enter the number step step:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<5;i++)
    {
        l2.insertlist(A[i]);
    }
    //l2.deletelist();
    //l2.deletelist();
    l2.display();
    l2.count();

}
