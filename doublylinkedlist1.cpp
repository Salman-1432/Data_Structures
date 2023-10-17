#include <iostream>
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
        head = NULL;
        tail=NULL;
    }
    void create(int x);// enter the number
    void insertatbe(int x); // enter the data from begining
    void insertatmid(int pos,int x);// enter the data from mid
    void insertatend(int x);// enter the data from end
    int deleteatbe();// delete the data from begining
    int deleteatend();// delete the data from end
    int deleteatmid();// delete the data from mid
    void display();// show the data 

};
void DL::create(int x)
{
    DL *newnode = new DL();// store the data from user
    newnode->next = NULL;// prev node of the newnode is NULL
    newnode->data = x;// store the data in newnode
    newnode->prev = NULL;// next node of the newnode is NULL
    DL *tail=head;// tail=head 
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while(tail->next!=NULL)// tail is running when till that will be NULL 
    {
        tail=tail->next;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void DL::insertatbe(int x)
{
    DL *newnode=new DL();
    newnode->data=x;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void DL::insertatmid(int pos,int x)
{

    DL*newnode=new DL();
    newnode->data=x;
    DL*tail=head;  
    for(int i=1;i<pos-1;i++)
    {
        tail=tail->next;   
    }
    newnode->prev=tail;
    newnode->next=tail->next;
    tail->next=newnode;
    newnode->next->prev=newnode;
}
void DL::insertatend(int x)
{
    DL*newnode=new DL();
    newnode->data=x;
    DL*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    newnode->prev=tail->next;
    tail->next=newnode;
    newnode->next=NULL;

}
int DL::deleteatbe()
{
    DL *tail=head;
    head=head->next;
    head->prev=NULL;
    delete (tail);

}
int DL::deleteatend()
{
    DL *tail,*temp=head;
    temp=tail;
    tail->prev->next=NULL;
    tail=tail->prev;
    delete temp;

}
int DL::deleteatmid()
{
    DL *tail,*temp=head;
    int pos,i=1;
    cout<<"Enter the number:"<<endl;
    cin>>pos;
    cout<<"salman:"<<endl;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
void DL::display()
{
    DL *tail=head;
    if (head == NULL)
    {
        cout << "list is empty:" << endl;
        return ;
    }
    cout << "display for the next:" << endl;
    while (tail != NULL)
    {
        cout << tail->data << endl;
        tail = tail->next;
    }
    
}
int main()
{
    DL sal;
    sal.create(10);
    sal.create(20);
    sal.create(30);
    sal.create(40);
    //sal.insertatbe(400);
    //sal.insertatmid(3,45);
    //sal.insertatend(14);
    //sal.deleteatbe();
    //sal.deleteatend();
    sal.deleteatmid();
    sal.display();
}
