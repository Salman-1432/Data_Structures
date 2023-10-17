/* #include<iostream>
using namespace std;
class DL
{
    DL *next;
    int data;
    DL *prev;
    public:
    DL *head,*tail;
    DL()
    {
        head=NULL;
        tail=NULL;
    }
    void createnode(int x);
    void ReverseL();
    void display();
};
void DL::createnode(int x)
{
    DL* newnode=new DL();
    newnode->prev=NULL;
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    DL*tail,*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void DL::ReverseL()
{
    DL *temp=head,*nextnode;
    while(temp!=NULL)
    {
        nextnode=temp->next;
        temp->next=temp->prev;
        temp->prev=nextnode;
        temp=nextnode;
    }
    temp=head;
    head=tail;
    tail=temp;
}
void DL::display()
{
    DL*temp=head;
    if(head==NULL)
    {
        cout<<"list is empty:"<<endl;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    DL d1;
    d1.createnode(10);
    d1.createnode(20);
    d1.createnode(30);
    // d1.createnode(110);
    // d1.createnode(230);
    // d1.createnode(340);
    // d1.ReverseL();
    d1.display();
  
} */

