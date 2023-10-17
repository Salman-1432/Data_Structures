#include <iostream>
using namespace std;
#define max 10
class Queue
{
    int array[max];
    int front = -1;
    int rear = -1;

public:
    void enqueue(int);
    int dequeue();
    // int peek();
    int isFull();
    int isEmpty();
    // int isFront();
    // int isLast();
    void display();
};
void Queue::enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue is overflow:" << endl;
    }
    else
        rear = rear + 1;
    array[rear] = data;
}
int Queue::dequeue()
{
    int data=-1;
    if (isEmpty())
    {
        cout << "Queue is empty:" << endl;
    }
    front=front+1;
    data = array[front];
    return data;
}
int Queue::isFull()
{
    if (rear == max - 1)
        return 1;
    else
        return 0;
}
int Queue::isEmpty()
{
    if (front == rear)
        return 1;
    else
        return 0;
}
void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty:" << endl;
    }
    for (front = 0; front <= rear; front++)
    {
        cout << array[front] << " ";
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
    q1.dequeue();
    q1.display();
}