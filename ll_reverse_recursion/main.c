//list reverse display
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create();
void rev_display();
void reverse();


int main()
{
    struct node *head=NULL;
    create(&head);
    printf("The reversed list is \n");
    rev_display(head);
    reverse(head);

    return 0;
}


void create(struct node **t)
{
    struct node *curr, *temp;
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
            *t = temp = curr;
        }
        else
        {
            temp->next = curr;
            temp = curr;
        }
        temp->next= NULL;
    }
}

void rev_display(struct node *t1)
{
    if(t1==NULL)
        return;
    rev_display(t1->next);
    printf("%d-->",t1->data);
}

void reverse(struct node *current)
{
     while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

