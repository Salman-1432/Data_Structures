#include <iostream>
using namespace std;
class stack
{
    struct node
    {
        int data;
        node *next;
    };

public:
    node *top;

    stack()
    {
        top = NULL;
    }
    void pushdata(int);
    int popdata();
    int isEmpty();
    int peekdata();
    void display();
};
void stack::pushdata(int x)
{
    node *newnode = new node(); // create the newnode
    newnode->data = x;          // point of the data
    newnode->next = NULL;       // next is the null
    newnode->next = top;        // store the address of the newnode
    top = newnode;              // pointer the of the newnode is store in top
}
int stack::popdata()
{
    int x;
    node *temp = top;
    node *newnode;
    if (isEmpty())
    {
        cout << "stack is underflow:" << endl;
    }
    x = newnode->data;
    top = top->next;
    newnode=top;
    delete temp;
    return x;
}
int stack::isEmpty()
{
    if (top == NULL)
        return 1;
    return 0;
}
int stack::peekdata()
{
    node *temp=top;
    if(top==NULL)
    {
        cout<<"stack is underflow:"<<endl;
    }
    return top->data;
}
void stack::display()
{
    node *temp = top;
    if (top == NULL)
    {
        cout << "stack is underflow:" << endl;
    }
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    stack s1;
    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(30);
    s1.pushdata(50);
    s1.popdata();
    cout<<"top data of the stack:"<<s1.peekdata()<<endl;
    s1.display();
}