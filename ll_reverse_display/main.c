//list reverse display
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head, *curr, *temp;

void create();
void display();
void rev_display();

int main()
{
    create();
    display();
    printf("The reversed list is \n");
    rev_display();
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

void rev_display()
{
    int i, j, c=0;
    struct node *t;
    t=head;
    for(t!=NULL;t=t->next;c++);

    for(i=c-1;i>=0;i--)
    {
        for(j=1,t=head;j<=i;j++,t=t->next);

        printf("%d=>",t->data);
    }
}
