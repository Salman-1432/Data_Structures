/* #include <iostream>
using namespace std;
class SLD
{
    struct node
    {
        int data;
        struct node *next;
    };
    node *head;

public:
    SLD()
    {
        head = NULL;
    }
    void createList(int);
    int DeleteFB();
    int DeleteFE();
    int DeleteFM();
    int searchElement(int);
    void display();
};
void SLD::createList(int x) // crete list in linklist
{
    node *newnode = new node(); // for new node
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode; // ponting to the newnode
        return;
    }
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newnode;
}
int SLD::DeleteFB() // delete for beginning
{
    node *p = head;
    head = head->next;
    delete p;
}
int SLD::DeleteFE() // delete for end
{
    node *prevnode;
    node *p = head;
    while (p->next != NULL)
    {
        prevnode = p;
        p = p->next;
    }
    if (p == head)
    {
        head = NULL;
    }
    else
    {
        prevnode->next = NULL;
    }
    delete p;
}
int SLD::DeleteFM() // delete for middle
{
    node *nextnode;
    node *p = head;
    int pos, i = 1;
    p = head;
    cout << "Enter the position:" << endl;
    cin >> pos;
    while (i < pos - 1)
    {
        p = p->next;
        i++;
    }
    nextnode = p->next;
    p->next = nextnode->next;
    delete nextnode;
}
int SLD::searchElement(int item)
{
    node *p = head;
    // int item;
    int pos = 1;
    // cout<<"serach the item:"<<endl;
    // cin>>item;
    while (p != NULL)
    {
        if (p->data == item)
        {
            cout << "position:" << pos << " " << endl;
        }
        p = p->next;
        pos++;
    }
    cout<<"item is not found in list:"<<endl;
}
void SLD::display() // show the display
{
    node *p = head;
    if (head == NULL)
    {
        cout << "list is Empty:" << endl;
    }
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    SLD d1;
    int Arr[5];
    cout << "Enter the one more than data:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> Arr[i];
    }
    cout << "Show the data of the create list:" << endl;
    for (int i = 0; i < 5; i++)
    {
        d1.createList(Arr[i]);
    }
    cout << "\n";
    int choice;
    while (1)
    {
        cout << "1 Delete from beginning:" << endl;
        cout << "2 Delete from End:" << endl;
        cout << "3 Delete from position:" << endl;
        cout << "4 seach element:" << endl;
        cout << "5 Display" << endl;
        cout << "6 Exit" << endl;
        cout << "Enter the choice of the number:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            d1.DeleteFB();
            break;
        case 2:
            d1.DeleteFE();
            break;
        case 3:
            d1.DeleteFM();
            break;
        case 4:
            d1.searchElement(40);
            break;
        case 5:
            d1.display();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "wrong choice:" << endl;
        }
    }
}
 */
