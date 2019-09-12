#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head;

void create(struct node **, int);
void display(struct node **);

int main()
{
	int n, i=0;
	struct node *head1, *head2, *t;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	create(&head1, n);
	display(&head1);
	printf("the total no. of nodes are: %d\n",n);
	if(n%2==0)
	{
		printf("the no.of nodes in first split list is: %d\n",n/2);
		t=head1;
		while(i!=(n/2)-1)
		{
			t=t->next;
			i++;
		}
		head2 = t->next;
		t->next = NULL;
		printf("the first ll is:");
		display(&head1);
		printf("the second ll is:");
		display(&head2);
	}
	else
	{
		printf("the no.of nodes in first split list is: %d\n",(n/2)+1);
		t=head1;
		while(i!=(n/2))
		{
			t=t->next;
			i++;
		}
		head2 = t->next;
		t->next = NULL;
		printf("the first ll is:");
		display(&head1);
		printf("the second ll is:");
		display(&head2);
	}

	printf("now the first linked list is :\n");
	
	return 0;
}

void create(struct node **h, int n)
{
	int i;
	struct node *temp, *current;
	
	for(i=0;i<n;i++)
	{
		current = (struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf(" %d",&current->data);
		current->next = NULL;
	
		if(i==0)
		{*h= temp = current;
		}
		else
		temp->next = current;
		temp = current;
	}	
	temp->next=NULL;
}

void display(struct node **h)
{
	struct node *t;
	t = *h;
	while(t!=NULL)
	{
		printf("%d=>",t->data);
		t=t->next;
	}
}


