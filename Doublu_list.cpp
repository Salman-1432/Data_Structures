#include <iostream>
using namespace std;
class linkedlist
{
    struct node
    {
        int data;
        node *next;
    };
    // typedef struct node node;
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }
    void createlist(int);
    void createatbe(int);
    void createatmid(int, int);
    void createatend(int, int);
    void count();
    void deleteatbe();
    void deleteatmid(int);
    void deleteatend(int);
    void display();
};
void linkedlist::createlist(int x)
{
    node *newnode = new node();
    newnode->data = x;
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
    temp->next = newnode;
}
void linkedlist::createatbe(int x)
{
    node *newnode = new node(); // store the data in newnode
    newnode->data = x;          // newnode the data of the node after print
    newnode->next = head;
    head = newnode;
}
void linkedlist::createatmid(int x, int index)
{
    node *newnode = new node();
    newnode->data = x;
    node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void linkedlist::count()
{
    node *temp = head;
    int ct = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        ct++;
    }
    cout << "total node:" << ct << endl;
}
void linkedlist::createatend(int x, int index)
{
    node *newnode = new node;
    newnode->data = x;
    node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void linkedlist::deleteatbe()
{
    node *temp = head;
    head = head->next;
    temp = head;
}
void linkedlist::deleteatmid(int index)
{
    node*temp=head;
    for(int i=0;i<index-1;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        
    }
    head=temp;
    head=head->next;
    temp=head;
}
void linkedlist::deleteatend(int index)
{
    node*temp=head;
    for(int i=0;i<index-1;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    head=temp;
    head=head->next;
}
void linkedlist::display()
{
    node *temp = head;
    if (head = NULL)
    {
        cout << "list is Empty:" << endl;
    }
    while (temp != NULL) //
    {
        cout << temp->data << endl; // print the value of the data
        temp = temp->next;          // these will be go the next node
    }
}
int main()
{
    linkedlist l1;
    int arr[5];
    cout << "Enter the number step step:" << endl;
    for (int i = 0; i < 5; i++) // enter the element for from user:
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        l1.createlist(arr[i]); // show the display for the user:
    }
    cout<<"\n";
   l1.createatbe(125);
    //  l1.createlist(2);
    //  l1.createlist(3);
    // l1.count();
    l1.createatmid(100,3);
    l1.createatend(200, 5);
    //l1.deleteatbe();
    //l1.deleteatmid(3);
    l1.deleteatend(5);
    l1.display();
}
