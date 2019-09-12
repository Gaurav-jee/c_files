#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void create(struct node **head);
void display(struct node **head);

int main()
{
	struct node *head1=NULL,*head2=NULL;
	create(&head1);
	display(&head1);
	create(&head2);
	display(&head2);
	//create();

	return 0;
}

void create(struct node **head)
{
    struct node *t,*curr;
	char ch='y';
	do
	{
		curr = (struct node *)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&curr->data);
		curr->next = NULL;

		if(*head==NULL)
		*head=curr;
		else
		{
            t=*head;
            while(t->next!=NULL)
                t=t->next;
            t->next=curr;
		}
		printf("\n do u want more node");
		scanf(" %c",&ch);
	}while(ch=='y');
}

void display(struct node **head)
{
	struct node *t;
	t=*head;
	while(t!=NULL)
	{
	printf("%d=>",t->data);
	t=t->next;
	}
}



