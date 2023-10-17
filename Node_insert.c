#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int linkedisTraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*insrertAtFirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}
struct node*insertAtindex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    for(int i=0;i<index;i++)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node*insertAtEnd(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node*insertAfterNode(struct node*head,struct node*prevnode,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*forth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=second;
    second->data=71;
    second->next=third;
    third->data=78;
    third->next=forth;
    forth->data=100;
    forth->next=NULL;
    //linkedisTraversal(head);
    //head=insrertAtFirst(head,120); //update the value of the head
   // head=insertAtindex(head,85,1);
    //head=insertAtEnd(head,1452);
    head=insertAfterNode(head,second,123);
    linkedisTraversal(head);
};