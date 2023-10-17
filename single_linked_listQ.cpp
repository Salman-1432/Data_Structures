#include <iostream>
using namespace std;
class SLink
{
public:
    struct node
    {
        int data;
        struct node *next;
    };
    node *head;
    SLink()
    {
        head = NULL;
    }
    void insertionET(int);
    void insertionBN(int);
    void insertionMD(int,int);
    void insertionEN(int,int);
    void display();
};
void SLink::insertionET(int x)
{
    node *newnode = new node();
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newnode;
}
void SLink::insertionBN(int x)
{
    node *newnode = new node();
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}
void SLink::insertionMD(int index,int x)
{
    node*newnode=new node();
    newnode->data=x;
    node*p=head;
    for(int i=0;i<index-1;i++)
    {
        cout<<"show the data:"<<p->data<<endl;
        p=p->next;
    }
    newnode->next=p->next;
    p->next=newnode;
}
void SLink::insertionEN(int index1,int x)
{
    node*newnode=new node();
    newnode->data=x;
    node*p=head;
    for(int i=0;i<index1-1;i++)
    {
        p=p->next;
    }
    newnode->next=NULL;
    p->next=newnode;

}
void SLink::display()
{
    node *p = head;
    if (head == NULL)
    {
        cout << "List is Empty:" << endl;
    }
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    SLink s1;
    int choice ,data;
    while(1)
    {
        cout<<"1 insertion from Empty:"<<endl;
        cout<<"2 insertion from Beginning:"<<endl;
        cout<<"3 insertion from Middle:"<<endl;
        cout<<"4 insertion from End:"<<endl;
        cout<<"5 insertion from Display:"<<endl;
        cout<<"6 insertion from Exit:"<<endl;
        cout<<"Enter the choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the data from Empty:"<<endl;
                   cin>>data;
                   s1.insertionET(data);
                   break;
            case 2:cout<<"Enter from beginnig:"<<endl;
                   cin>>data;
                   s1.insertionBN(data);
                   break;
            case 3:cout<<"Enter from middle:"<<endl;
                   cin>>data;
                   s1.insertionMD(2,data);
                   break;
            case 4:cout<<"Enter from end:"<<endl;
                   cin>>data;
                   s1.insertionEN(5,data);
                   break;
            case 5:cout<<"show the display:"<<endl;
                   s1.display();
                   break;
            case 6:exit(0);
                    break;
            default:
                    cout<<"wrong choice:"<<endl;

        }
    }

}