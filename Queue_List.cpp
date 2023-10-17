#include <iostream>
#include <malloc.h>
using namespace std;
class Queue_Linked
{
    struct queu
    {
        int info;
        struct queu *next;
    };
    struct queu *front;
    struct queu *rear;
    typedef struct queu *NODE;

public:
    Queue_Linked()
    {
        front = NULL;
        rear = NULL;
    }
    void push();
    void pop();
    void traverse();
};
void Queue_Linked::push()
{
    NODE NewNode;
    NewNode = (NODE)malloc(sizeof(struct queu));
    cout << "\nEnter the no to be pushed = ";
    cin >> NewNode->info;
    NewNode->next = NULL;
    if (rear != NULL)
        rear->next = NewNode;
    rear = NewNode;
    if (front == NULL)
        front = rear;
}
void Queue_Linked::pop()
{
    {
        if(front == NULL){

            cout<< "\nThe Queue is empty";
        rear = NULL;
    }
    else
    {
        cout << "\nThe popped element is = " << front->info;
        if (front != rear)
            front = front->next;
        else
            front = NULL;
    }
}
}
void Queue_Linked::traverse()
{

    if (front == NULL)
        cout << "\nThe Queue is empty";
    else
    {
        NODE Temp_Front = front;
        cout << "\nThe element(s) is / are = ";
        while (Temp_Front != rear)
        {
            cout << Temp_Front->info<<" ";
            Temp_Front = Temp_Front->next;
        };
        cout << Temp_Front->info;
    }
}
int main()
{
    int choice;
    char option;
    Queue_Linked Queue;
    do
    {
        cout << "\n1.PUSH\n";
        cout << "2. POP\n";
        cout << "3. DISPLAY\n";
        cout << "\n\nEnter your choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Queue.push();
            break;
        case 2:
            Queue.pop();
            break;
        case 3:
            Queue.traverse();
            break;
        }
        cout <<"continue:";
        cin >> option;
    } while (option == 'Y' || option == 'y');
}