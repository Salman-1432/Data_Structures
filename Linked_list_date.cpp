#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*link;
    node*head;
    node()
    {
        link=NULL;
        data=0;

    }
    node(int x)
    {
        data=x;
        link=NULL;
    }
};
class SLT
{
    public:
    node*head;
    SLT()
    {
        head=NULL;
    }
    void listcreate(int x);
    void listtobe(int x);
    void listtoend(int x);
    void listtomidle(int index,int x);
    void display();
};
void SLT::listcreate(int x)
{
    node*newnode=new node(x);
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    node*temp=head;
    while(temp->link!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    temp->link=newnode;
}
void SLT:: listtobe(int x)
{
    node*newnode=new node(x);
    node*temp=head;
    newnode->link=head;
    head=newnode;
}
void SLT::listtoend(int x)
{
    node*newnode=new node(x);
    node*temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    newnode->link=temp->link;
    temp->link=newnode;
}
void SLT::listtomidle(int index,int x)
{
    node*newnode=new node(x);
    node*temp=head;
    for(int i=0;i<index;i++)
    {
        temp=temp->link;
    }
    newnode->link=temp->link;
    temp->link=newnode;
}

void SLT::display()
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"list is empty:"<<endl;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}
int main()
{
    SLT s1;
    s1.listcreate(10);
    s1.listcreate(20);
    //s1.listcreate(120);
   // s1.listtobe(45);
    s1.listtoend(100);
    s1.listtomidle(2,145);
    s1.display();

}
 

