#include <iostream>
using namespace std;
#define MAX 5

class stack
{
    int Arr[MAX];
    int item;
    int top;

public:
    stack()
    {
        top = -1;
    }
    void pushdata(int);
    int popdata();
    int isEmpty();
    int isFull();
    int peekdata();
    void display();
};
void stack::pushdata(int x)
{
    item=x;
    if(isFull())
    {
        cout<<"stack is overflow:"<<endl;
    }
    top=top+1;
    Arr[top]=item;
}
int stack::popdata()
{
    int item;
    if(isEmpty())
    {
        cout<<"stack is undeflow:"<<endl;
    }
    top=top-1;
    item=Arr[top];
    return item;
}
int stack:: isFull()
{
    if(top==MAX-1)
        return 1;
    else return 0;
}
int stack:: isEmpty()
{
    if(top==-1)
        return 1;
    else return 0;
}
int stack::peekdata()
{
    if(top==-1)
    {
        cout<<"stack is Empty:"<<endl;
    }
    return Arr[top];
}
void stack::display()
{
    if(top==-1)
    {
        cout<<"stack is empty:"<<endl;
    }
    for(int i=top;i>-1;i--)
    {
        cout<<Arr[i]<<endl;
    }
}
int main()
{
    stack s1;
    int choice ,m;
    int item;
    while(1)
    {
        cout<<"1:push"<<endl;
        cout<<"2:pop"<<endl;
        cout<<"3:Empty"<<endl;
        cout<<"4:Full"<<endl;
        cout<<"5:display"<<endl;
        cout<<"6:Exit"<<endl;
        cout<<"Enter the choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the number for push:"<<endl;
                    cin>>m;
                    s1.pushdata(m);
                    break;
            case 2:item=s1.popdata();
                   cout<<"pop of the data from stack:"<<item<<endl;
                   break;
            case 3:s1.isEmpty();
                   break;
            case 4:s1.isFull();
                   break;
            case 5:s1.display();
                    break;
            case 6:exit(1);
            default:
                    cout<<"wrong choice:"<<endl;
        }
    }

}