#include <iostream>
using namespace std;
// typedef struct struct node struct node;
class DBlist
{
    struct node
    {
        int data;
        struct node *next;
        struct node *previous;
    };
    struct node *head;
    struct node *tail;
public:
    DBlist()
    {
        head = nullptr;
        tail = nullptr;
    }

    void create(int item);
    void display();
    void reversedisplay();
};

void DBlist::create(int item)
{
    struct node *current;
    struct node *newnode;
    newnode = (struct node *)new (struct node);
    newnode->data = item;
    newnode->previous = nullptr;
    newnode->next = nullptr;

    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    else
    {
        current = head;
        while (current->next!= nullptr)
        {
            current = current->next;
        }
        current->next = newnode;
        current->next->previous = current;
        tail = newnode;
    }
}

void DBlist::display()
{
    struct node *current;
    current = head;
    if (head == nullptr)
    {
        cout << "Empty list";
    }
    else
    {
        while (current != nullptr)
        {
            cout << current->data << "  ";
            current= current->next;
        }
    }
}

void DBlist::reversedisplay()
{
    struct node *current;
    current = tail;
    while(current != nullptr)
    {
        cout<<current->data<<"  ";
        current = current->previous;
    }
}

int main()
{
    DBlist L1;
    int choice, m;
    while (1)
    {
        cout <<"1.Create:"<<endl;
        cout<<"2.Display:"<<endl;
        cout<<"3.revdisplay:"<<endl;
        cout<<"exit"<<endl;
        cin >> choice;
        switch(choice)
        {
            case 1: cout<<"\nEnter the element: ";
                    cin>>m;
                    L1.create(m);
                    break;
            case 2: L1.display();
                    break;
            case 3: L1.reversedisplay();
                    break;
            case 4: exit(0);
            default: cout<<"\nInvalid Choice";
        }
    }
}