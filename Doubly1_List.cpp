/* #include<stdio.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;
struct node*createlist(struct node*head,int x)
{
	struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	struct node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
void deletelist(struct node*head,int index)
{
	struct node*temp=head;
	for(int i=0;i<index;i++)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	head=temp;
	head=head->next;
	temp=head;
}	
void display(struct node*head)
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("list is empty:");
	}
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	printf("1:createlist:\n");
	printf("2:deletelist:\n");
	printf("3:display:\n");
	printf("4:exit:\n");
	int choice,m,index;
	printf("Entter the number:\n");
	scanf("%d",choice);
	switch(choice)
	{
		while(1)
		{

			case 1:printf("Enter the number:\n");
					scanf("%d",&m);
					head=createlist(m);
					break;
			case 2:printf("Enter the index:\n");
					scanf("%d",index);
					head=deletelist(index);
					break;	
			case 3:cout<<"Enter the display of the equation"<<endl;
				display();
			case 4:exit(0);
			default:
					cout<<"wrong choice"<<endl;
		}
	} */
#include<iostream>
using namespace std;
class LD
{
	struct node
	{
		int data;
		node*Rlink;
		node*Llink;
	};
	public:
	node*head;
	node*tail;
	LD()
	{
		head=NULL;
		tail=NULL;
	}
	void insertdl(int x);
	//void deletedl(int index);
	void Rdisplay();
	void Ldisplay();
};
void LD::insertdl(int x)
{
	node*newnode=new node();
	newnode->data=x;
	newnode->Rlink=NULL;
	newnode->Llink=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	node*temp=head;
	node*temp1=tail;
	while(temp->Rlink!=NULL)
	{
		temp=temp->Rlink;
	}
	temp->Rlink=newnode;
	temp->Rlink->Llink=temp;
	tail=newnode;
}
void LD::Rdisplay()
{
	node*temp=head;
	if(head==NULL)
	{
		cout<<"List is Empty:"<<endl;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->Rlink;
	}
}
void LD::Ldisplay()
{
	node*temp1=tail;
	if(tail==NULL)
	{
		cout<<"list is Empty:"<<endl;
	}
	while(temp1!=NULL)
	{
		cout<<temp1->data<<endl;
		temp1=temp1->Llink;
	}

}
int main()
{
	LD d1;
	int choice ,m;
	while(1)
	{
		cout<<"1:insert:"<<endl;
		//cout<<"2:remove:"<<endl;
		cout<<"3:Rdisplay:"<<endl;
		cout<<"4:Ldispay:"<<endl;
		cout<<"5:exit():"<<endl;
		cout<<"Enter the choice of the number:"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter the number:"<<endl;
			cin>>m;
			d1.insertdl(m);
				break;
			//case 2:cout<<"Enter the index:"<<endl;
			//cin>>m;
			//d1.deletedl(m);
				break;
			case 3:d1.Rdisplay();
				break;
			case 4:d1.Ldisplay();
				break;
			case 5:exit(0);
			default:
				cout<<"Wrong choice:"<<endl;
		}
	}
}

	










