#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int data;
	struct Queue *next;
}*front, *rear;

void Enqueue(int x);
void Dequeue();

int main()
{
	struct Queue *temp;
	front = rear = NULL;
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Dequeue();
	Dequeue();
	for(temp=front; temp!=NULL ;temp=temp->next)
	{
		printf("|%d|\t", temp->data);
	}
	return 0;
}

void Enqueue(int x)
{
	struct Queue *new1 = (struct Queue*)malloc(sizeof(struct Queue));
	new1->data = x;
	new1->next = NULL;

	if(front == NULL)
	{
		front = new1;
	}
	else
	{
		rear->next = new1;
	}
	rear = new1;
}

void Dequeue()
{
	struct Queue *p;
	if(front == NULL)
	{
		printf("Queue Empty!!\n");
	}
	else
	{
		p = front;
		printf("\nThe Deleted data::%d\n", p->data);
		if(front->next == NULL)
		{
		    free(p);
			front = NULL;
		}
		front = front->next;
		free(p);
	}
}

