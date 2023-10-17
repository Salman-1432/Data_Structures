#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
    struct node *prev;
}*start,*front, *rear;

class singlellist
{
    public:
        node*createnode(int);
        void addnode();
        void display();
        singlellist()
        {
            start = NULL;
        }
};


node *singlellist::createnode(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    if (temp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}

void singlellist::addnode()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *p;
    temp = createnode(value);
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
    cout<<"Element Inserted "<<endl;
}

void singlellist::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

class double_llist
{
    public:
        void create_list(int value);
        void add_node(int value);
        void delete_element(int value);
        void display();
        double_llist()
        {
            start = NULL;
        }
};


void double_llist::create_list(int value)
{
    struct node *s, *temp;
    temp = new(struct node);
    temp->info = value;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        s = start;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
}

void double_llist::add_node(int value)
{
    if (start == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->info = value;
    temp->next = start;
    start->prev = temp;
    start = temp;
    cout<<"Element Inserted"<<endl;
}


void double_llist::delete_element(int value)
{
    struct node *tmp, *q;
    if (start->info == value)
    {
        tmp = start;
        start = start->next;
        start->prev = NULL;
        cout<<"Element Deleted"<<endl;
        free(tmp);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {
        if (q->next->info == value)
        {
            tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            cout<<"Element Deleted"<<endl;
            free(tmp);
            return;
        }
        q = q->next;
    }

    if (q->next->info == value)
    {
        tmp = q->next;
        free(tmp);
        q->next = NULL;
        cout<<"Element Deleted"<<endl;
        return;
    }
    cout<<"Element "<<value<<" not found"<<endl;
}

void double_llist::display()
{
    struct node *q;
    if (start == NULL)
    {
        cout<<"List empty,nothing to display"<<endl;
        return;
    }
    q = start;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {
        cout<<q->info<<" <-> ";
        q = q->next;
    }
    cout<<"NULL"<<endl;
}

class queue_list
{
    public:
        void insert(int);
        void display();
        void del();
        queue_list()
        {
            front = NULL;
            rear = NULL;
        }
};

void queue_list::insert(int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->info = item;
    tmp->next = NULL;
    if (front == NULL)
        front = tmp;
    else
        rear->next = tmp;
    rear = tmp;
}

void queue_list::del()
{
    node *tmp;
    if (front == NULL)
        cout<<"Queue Underflow"<<endl;
    else
    {
        tmp = front;
        cout<<"Element Deleted: "<<tmp->info<<endl;
        front = front->next;
        free(tmp);
    }
}


void queue_list::display()
{
    node *ptr;
    ptr = front;
    if (front == NULL)
        cout<<"Queue is empty"<<endl;
    else
    {
        cout<<"Queue elements :"<<endl;
        while (ptr != NULL)
        {
            cout<<ptr->info<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
}


int main()
{
    int choice, nodes, element, position, i;
    int item;
    singlellist sl;
    double_llist dl;
    queue_list ql;
    start = NULL;

    cout << "enter your choice"<<endl;
    cout<< "1 for Singly linked list"<<endl;
    cout<< "2 for Doubly linked list"<<endl;
    cout<< "3 for Queue using linked list"<<endl;
    cin>> choice;
    switch(choice)
    {
    case 1:
         while (1)
        {
            cout<<endl<<"Operations on singly linked list"<<endl;
            cout<<"1.Insert Node "<<endl;
            cout<<"2.Display List "<<endl;
            cout<<"3.Exit "<<endl;
            cout<<"Enter your choice : ";
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"Inserting Node: "<<endl;
                sl.addnode();
                cout<<endl;
                break;
            case 2:
                cout<<"Display elements of link list"<<endl;
                sl.display();
                cout<<endl;
                break;
            case 3:
                exit(1);
            default:
                cout<<"Wrong choice"<<endl;
            }
        }

    case 2:
        while (1)
        {
            cout<<endl<<"Operations on Doubly linked list"<<endl;
            cout<<"1.Create Node"<<endl;
            cout<<"2.Add Node"<<endl;
            cout<<"4.Delete"<<endl;
            cout<<"5.Display"<<endl;
            cout<<"6.Exit "<<endl;
            cout<<"Enter your choice : ";
            cin>>choice;
            switch ( choice )
            {
            case 1:
                cout<<"Enter the element: ";
                cin>>element;
                dl.create_list(element);
                cout<<endl;
                break;
            case 2:
                cout<<"Enter the element: ";
                cin>>element;
                dl.add_node(element);
                cout<<endl;
                break;
            case 3:
                cout<<"Enter the element: ";
                cin>>element;
                cout<<"Insert Element after postion: ";
                cin>>position;
                cout<<endl;
                break;
            case 4:
                if (start == NULL)
                {
                    cout<<"List empty,nothing to delete"<<endl;
                    break;
                }
                cout<<"Enter the element for deletion: ";
                cin>>element;
                dl.delete_element(element);
                cout<<endl;
                break;
            case 5:
                dl.display();
                cout<<endl;
                break;
            case 6:
                exit(1);
            default:
                cout<<"Wrong choice"<<endl;
            }
        }

    case 3:
        while (1)
        {
            cout<<"Operations on Queue"<<endl;
            cout<<"1.Insert Element into the Queue"<<endl;
            cout<<"2.Delete Element from the Queue"<<endl;
            cout<<"3.Traverse the Queue"<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Enter your Choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"Enter value to be inserted into the queue: ";
                cin>>item;
                ql.insert(item);
                break;
            case 2:
                ql.del();
                break;
            case 3:
                ql.display();
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"Wrong Choice"<<endl;
            }
        }
    }
}
