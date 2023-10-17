#include<iostream>
using namespace std;
class RF
{
    int data;
    RF *next;
    public:
    RF *head;
    RF()
    {
        head=NULL;
    }
    void create(int x);
    void reverse();
    void display();
};
void RF::create(int x)
{
    RF *newnode=new RF();
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    RF *nextnode=head;
    while(nextnode->next!=NULL)
    {
        nextnode=nextnode->next;
    }
    nextnode->next=newnode;
}
void RF::reverse()
{
    RF *prevenode,*currentnode,*nextnode;
    prevenode=NULL;
    currentnode=nextnode=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevenode;
        prevenode=currentnode;
        currentnode=nextnode;
    }
    head=prevenode;

}
void RF::display()
{
    RF*nextnode=head;
    if(head==NULL)
    {
        cout<<"list empty:"<<endl;
        return ;
    }
    while(nextnode!=NULL)
    {
        cout<<nextnode->data<<endl;
        nextnode=nextnode->next;
    }
}
int main()
{
    RF s1;
    s1.create(10);
    s1.create(20);
    s1.create(30);
    s1.display();
    s1.reverse();
    s1.display();
}
