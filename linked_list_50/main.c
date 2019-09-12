#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head,*last=NULL,*curr=NULL;

void create();
void display();

int main()
{
	int s;
	while(1)
	{
	printf("\t\tLINKED LIST MENU :\n");
	printf("1. Create list\n");
	printf("2. Diplay List :\n");
	printf("3.exit");
	printf("Enter ur opt\n");
	scanf("%d",&s);

	switch (s)
	{
	case 1:
		{
		create();
		break;
		}
	case 2:
		{
		display();
		break;
		}
	case 3:exit(0);
	}

	}

	return 0;
}

void create()
{
	int i, n, data;
	char ch='y';


	do
	{
		curr = (struct node *)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&curr->data);
		curr->next = NULL;

		if(last==NULL)
		head=last=curr;
		else
		{
		last->next=curr;
		last=curr;
		}

		printf("\n do u want more node");
		scanf(" %c",&ch);
	}while(ch=='y');
}

void display()
{
	struct node *t;
	t=head;
	while(t!=NULL)
	{
	printf("%d=>",t->data);
	t=t->next;
	}
}
