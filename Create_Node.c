#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int RDdisplay(struct node*p)
{
    if(p!=NULL)
    {
        RDdisplay(p->next);
        printf("%d ",p->data);
        
    }
}
int count(struct node*p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}
int Rcount(struct node*p)
{
    if(p!=NULL)
    
        return Rcount(p->next)+1;
    else
        return 0;
    
}
int sum(struct node*p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;

    } 
    return s; 
}
int Rsum(struct node*p)
{
    if(p==NULL)
        return 0;
    else 
        return Rsum(p->next)+p->data;

}
int Max(struct node*p)
{
    int max=INT32_MIN;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}
int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);
    //display(first);
    printf("\n");
    //RDdisplay(first);
    printf("sum is %d\n\n",sum(first));
}