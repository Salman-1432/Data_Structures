/* #include<iostream>
using namespace std;
#define MAX 5
class Queue
{
    public:
    int size[MAX];
    int data;
    int rear=-1;
    int front=-1;
    Queue()
    {
        data=0;
        rear=-1;
        front=-1;
    }
    /*
    Queue(int x)
    {
        data=x;
        rear=-1;
        front=-1;
    } 
    void enqueue(int);
    int peek();
    int dequeue();
    int isFull();
    int isEmpty();
    void display();
};
void Queue::enqueue(int x)
{
    int data=x;
    if(isFull())
    {
        cout<<"rear is Full:"<<endl;
        //return ;
    }
    rear=rear+1;
    size[rear]=data;
    
}
int Queue::isFull()
{
    if(rear==MAX-1)
        return 1;
    else
        return 0;
}
int Queue::dequeue()
{
    int data;
    if(isEmpty())
    {
        cout<<"queue is underflow:"<<endl;
    }
    front=front+1;
    data=size[front];
    return data;
}
int Queue::isEmpty()
{
    if(rear==-1)
        return 1;
    else 
        return 0;
}
int Queue:: peek()
{
    if(isEmpty())
    {
        cout<<"Queue is empty:"<<endl;
    }
    return size[front+1];
}
void Queue::display()
{
    if(isEmpty())
    {
        cout<<"rear is Empty:"<<endl;
    }
    for(int i=front+1;i<=rear;i++)
    {
        cout<<size[i]<<" ";
    }
}
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    cout<<"\n";
    /*cout<<"for delete for fuction:"<<endl;
    q1.dequeue();
    q1.dequeue();
    q1.display();
    cout<<"\n";
    cout<<"peek point is:"<<q1.peek()<<endl;

} */
#include<iostream>
using namespace std;
class node
{
    public:
    int data ;
    node*next;
    node()
    {
        data=0;
        next=NULL;
    }
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct Queue
{
    public:
    node *rear,*front=NULL;
    Queue()
    {
        rear=NULL;
        front=NULL;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};
void Queue::enqueue(int x)
{
    node *newnode=new node(x);
    if(rear==NULL)
    {
        rear=front=NULL;
    }
    rear->next=newnode;
    rear=newnode;
}
int Queue::dequeue()
{
    if(front==NULL)
    {
        //return ;
    }
    node*newnode=front;
    front=front->next;
    if(front==NULL)
        rear=NULL;
    delete(newnode);  
}
void Queue::display()
{
    while(rear->next!=NULL)
    {
        cout<<rear->data<<endl;
        rear=rear->next;
    }   
}
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(50);
    q1.display();
}
