// k th node from back
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void create(struct node **, int);
void display(struct node **);

int main()
{
	int n, i=0, k;
	struct node *head1, *t;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	create(&head1, n);
	display(&head1);
	
	printf("enter the k value :\n");
	scanf("%d", &k);
	t=head1;
	while(i!=(n-k))
	{
		t=t->next;
		i++;
	}
	printf("%d",t->data);
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


