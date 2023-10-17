/*#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
int create(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    head=new struct node;
    second=new struct node;
    third=new struct node;
    head->data=10;
    head->next=second;
    second->data=14;
    second->next=third;
    third->data=48;
    third->next=NULL;
    int p=create(head);
}
#include<iostream>
using namespace std;
class node
{
    int data;
    node*next;
    public:
    void insert(int);
    void display();
};
void node::insert(int x)
{
    node*head;
    if(head==NULL)
    {
        cout<<"Empty:"<<endl;
    }
    node*ptr,*newnode;
    ptr=head;
    newnode=new node();
    ptr->data=x;
    while(ptr->next!=NULL)
    {
        //cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    ptr->next=newnode;

}
void node::display()
{
    node*head,*ptr;
    if(head==NULL)
    {
        cout<<"list is empty:"<<endl;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    node s1;
    s1.insert(10);
    s1.display();
}*/
#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.salman");
    ch=fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
}


