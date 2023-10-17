#include <iostream>
using namespace std;
class DL
{

    struct node
    {
        node *prev;
        int data;
        node *next;
    };
    node *head;
    node *tail;

public:
    DL()
    {
        head = NULL;
        tail = NULL;
    }
    void createlist(int);
    void display();
    void reverse();
};
void DL::createlist(int da)
{
    node *newnode = new node();
    newnode->prev = NULL;
    newnode->data = da;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp->prev != NULL)
    {
        temp = temp->prev;
    }
    temp->next = newnode;
    temp->prev=newnode;
}
void DL::display()
{
    node * temp= head;
    if (head == NULL)
    {
        cout << "List is empty:" << endl;
    }
    cout<<"display for first element:"<<endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void DL::reverse()
{
    node *temp = tail;
    if (head == NULL)
    {
        cout << "List is empty:" << endl;
    }
    cout<<"display for reverse display:"<<endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->prev;
    }
}
int main()
{

    DL d1;
    int choice;
    int da;
    while (true)
    {
        cout << "1 create List:" << endl;
        cout << "2 display List:" << endl;
        cout << "3 reverse list:" << endl;
        cout << " 4  exit():" << endl;
        cout << "Enter the choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the data:" << endl;
            cin >> da;
            d1.createlist(da);
            break;
        case 2:
            d1.display();
            break;
        case 3:
            d1.reverse();
            break;
        case 4:
            exit(0);

        default:
            cout << "Wrong choice:" << endl;
        }
    }
}
/*
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev, *next;
};

class dl
{
    Node *head;

public:
    dl()
    {
        head = NULL;
    }

    void createlist()
    {
        int n;
        cout << "Input value : ";
        cin >> n;
        Node *temp, *newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data = n;
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {

            head = newnode;
            temp = head;
        }
        else
        {

            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    void display()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "list is empty:" << endl;
        }
        cout<<"list : ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void display1()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "list is empty:" << endl;
        }
        cout<<"list in reverse : ";
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        do
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }while(temp!=NULL);
        cout<<endl;
    }
};

int main()
{
    dl n1;
    int n;
    cout << "Number of element in list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        n1.createlist();
    }

    n1.display();
    n1.display1();
}*/