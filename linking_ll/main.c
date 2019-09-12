#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void create(struct node **h);
void display(struct node **h);

int main()
{
    struct node *head1, head2;
	create(&head1);
	display(&head1);
	create(&head2);
	display(&head2);

	return 0;
}

void create(struct node **h)
{
    struct node *t=NULL, *curr=NULL;
	char ch='y';
	do
	{
		curr = (struct node *)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&curr->data);
		curr->next = NULL;

		if(h==NULL)
		h=t=curr;
		else
		{
            t->next=curr;
            t=curr;
		}
		printf("\n do u want more node");
		scanf(" %c",&ch);
	}while(ch=='y');
}

void display(struct node **h)
{
	struct node *t;
	t=h;
	while(t!=NULL)
	{
	printf("%d=>",t->data);
	t=t->next;
	}
}


