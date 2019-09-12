//swapping two nodes without changing the data
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head, *curr, *temp;

void create();
void display();

int main()
{
    struct node *t, *t1, *t2;
    int n, i;
    create();
    display();
    printf("enter the position of the node to swap!!\n");
    scanf(" %d",&n);
    t=head;
    for(i=0;i<n-2;i++)
    {
        t=t->next;
    }
    t1=t->next;
    t2=t1->next;


    t1->next = t2->next;
    t->next = t2;
    t2->next = t1;
    display();
    return 0;
}

void create()
{
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        curr = (struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&curr->data);
        curr->next = NULL;
        if(i==0)
        {
            head = temp = curr;
        }
        else
        {
            temp->next = curr;
            temp = curr;
        }
        temp->next= NULL;
    }
}

void display()
{
    struct node* t;
    t = head;
    while(t!=NULL)
    {
        printf("%d=>",t->data);
        t=t->next;
    }

}

