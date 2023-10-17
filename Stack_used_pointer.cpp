#include<iostream>
using namespace std;
class stack
{
    struct node
    {
        int data;
        node*next;
    };
    node*top;
    public:
    stack()
    {
        top=NULL;
    }
    void pushdata(int);
    int popdata();
    int isEmpty();
    int peekdata();
    void display();
};
void stack::pushdata(int x)
{
    node*newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    newnode->next=top;
    top=newnode;
}
int stack::popdata()
{
    int x;
    node*temp=top;
    node*newnode;
    if(isEmpty())
    {
        cout<<"stack is underflow:"<<endl;
    }
    newnode=top;
    x=newnode->data;
    top=top->next;
    //newnode=top;
    delete temp;
    return x;
}
int stack:: isEmpty()
{
    if(top==NULL)
        return 1;
    return 0;
}
int stack:: peekdata()
{
    if(top==NULL)
    {
        cout<<"stack is undeflow:"<<endl;
    }
    return top->data;
}
void stack::display()
{
    node*temp=top;
    if(top==NULL)
    {
        cout<<"stack is underflow:"<<endl;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    stack s1;
    int choice,m,x;
    while(1)
    {
        cout<<"1:push for the top:"<<endl;
        cout<<"2:pop for the remove:"<<endl;
        cout<<"3:isEmpty for tht empty:"<<endl;
        cout<<"4:peek for the top element:"<<endl;
        cout<<"5:display of the element:"<<endl;
        cout<<"6:exit():"<<endl;
        cout<<"Enter the choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the numer of the element:"<<endl;
                    cin>>m;
                    s1.pushdata(m);
                    break;
            case 2:x=s1.popdata();
                    cout<<"pop the nunber:"<<x<<endl;
                    break;
            case 3:s1.isEmpty();
                    break;
            case 4:cout<<"peep the top data:"<<s1.peekdata()<<endl;
                    break;
            case 5:s1.display();
                   break;
            case 6:exit(0);
            default:
                    cout<<"wront choice:"<<endl;

        }
    }
}