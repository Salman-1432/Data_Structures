// I AM DOING PROGRAM OF THE QUEUE
#include <iostream>
using namespace std;
#define MAX 5
class Queue
{
    int item;
    int Arr[MAX];
    int rear;
    int front;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int);
    int dequeue();
    int peek();
    int isEmpty();
    int isFull();
    void display();
};
void Queue::enqueue(int item)
{
    if (isFull())
    {
        cout << "Queue is overflow" << endl;
    }
    rear = rear + 1;
    Arr[rear] = item;
}
int Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is underflow:" << endl;
    }
    front=front+1;
    item = Arr[front];
    return item;
}
int Queue::isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}
int Queue::isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}
int Queue::peek()
{
    if (isEmpty())
    {
        cout << "Queue is underflow:" << endl;
    }
    return Arr[front];
}
void Queue::display()
{
    if(front==-1)
    {
        cout<<"Queue is underflow:"<<endl;
    }
    for(int i=0;i<MAX;i++)
    {
            cout<<Arr[i]<<endl;
    }
}
int main()
{
    Queue q1;
    int choice, m,item;
    while (1)
    {
        cout << "1:enqueu:" << endl;
        cout << "2:dequeu:" << endl;
        cout << "3:peek:" << endl;
        cout << "4:isEmpty:" << endl;
        cout << "5:isFull:" << endl;
        cout<<"6:display():"<<endl;
        cout << "7:Exit():" << endl;
        cout << "Enter the choice of the number:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number:" << endl;
            cin >> m;
            q1.enqueue(m);
            break;
        case 2:item=q1.dequeue();
                cout<<"show the item:"<<item<<endl;
            break;
        case 3:
            cout << "show element of the front:" << q1.peek() << endl;
            break;
        case 4:
            q1.isEmpty();
            break;
        case 5:
            q1.isFull();
            break;
        case 6:q1.display();
                break;
        case 7:
            exit(0);
        default:
            cout << "Wrong number:" << endl;
        }
    }
}