/* #include<iostream>
using namespace std;
class CSL
{
    int data ;
    CSL *next;
    public:
    CSL *head,*tail;
    CSL()
    {
        head=NULL;
        tail=NULL;
    }
    void createc(int x);
    void display();
};
void CSL::createc(int x)
{
    CSL *newnode=new CSL();
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    CSL *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void CSL::display()
{
    CSL*temp=head;
    if(head==NULL)
    {
        cout<<"list is empty:"<<endl;
    }
    while(temp->next!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main()
{
    CSL c1;
    c1.createc(10);
    c1.createc(20);
    c1.createc(30);
    c1.display();
}

#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*circularsingly(int data)
{
    struct node*newnode=new struct node();
    newnode->data=data;
    newnode->next=newnode;
    return newnode;
}
int main()
{
    int data=32;
    struct node*tail;
    tail=circularsingly(data);
    cout<<tail->data<<endl;
}
#include<iostream>
using namespace std;
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*circulardoubly(int data)
{
    struct node*newnode=new struct node();
    newnode->data=data;
    newnode->next=newnode;
    newnode->prev=newnode;
    return newnode;
}
int main()
{
    int data =48;
    struct node*tail;
    tail=circulardoubly(data);
    cout<<tail->data<<endl;
}*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*addempty(int data)
{
    struct node*temp;
    temp=new struct node();
    temp->data=data;
    temp->next=temp;
    return temp;
}
struct node*addbeg(struct node*tail,int data)
{
    struct node*newnode=new struct node();
    newnode->data=data;
    newnode->next=tail->next;
    tail->next=newnode; 
    return tail; 
}
struct node*addend(struct node*tail,int data)
{
    struct node*newnode=new struct node();
    newnode->data=data;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=tail->next;
    return tail;
    
}
struct node*addmidle(struct node*tail,int data)
{
    struct node*newnode=new struct node();
    newnode->data=data;
    int pos;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    struct node*p;
    while(pos>1)
    {
        p=p->next;
        pos--;
    }
    newnode->next=p->next;
    p->next=newnode;
    if(p==tail)
    {
        tail=tail->next;
    }
    return tail;


}
void printnode(struct node*tail)
{
    struct node*p=tail->next;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=tail->next);
}
int main()
{
    struct node*tail;
    tail=addempty(45);
    tail=addbeg(tail,12);
    tail=addend(tail,48);
    tail=addend(tail,89);
    tail=addmidle(tail,789);
    printnode(tail);
    return 0;
}