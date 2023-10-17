#include <iostream>
using namespace std;
class node
{
    struct Node
    {
        int data;
        node *next;
    };
    Node *Head;
     public : 
    node()
    {

        // data = 0;
        Head->next = NULL;
    }
    // node(int data)
    // {

    //     this->data = data;
    //     this->next = NULL;
    // }
};
class LDlist
{

    node *head;

public:
    // LDlist()
    // {

    //     head = NULL;
    // }
    void createlist(int);
    void nodebeg(int);
    void nodeend(int);
    void display();
};
void LDlist::createlist(int data)
{
    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
    }
    node *temp = head;
    temp = newnode;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}
void LDlist::nodebeg(int data)
{
    node *newnode = new node(data);
    // node*temp=head;
    newnode->next = head;
    head = newnode;
    // cout<<newnode->data<<" ";
}
void LDlist::nodeend(int data)
{
    node *newnode = new node(data);
    if (head = NULL)
    {
        head = newnode;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    temp->next = newnode;
}
void LDlist::display()
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    LDlist l1;
    l1.createlist(1);
    l1.createlist(2);
    l1.createlist(3);
    l1.createlist(4);
    l1.createlist(5);
    l1.display();
    cout << endl;
    l1.nodebeg(6);
    l1.nodeend(10);
    l1.nodeend(20);
    l1.display();
}
