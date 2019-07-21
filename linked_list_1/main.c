#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct node* next;
};

int main()
{
    struct Node* head;
    head = NULL;
    //inserting first node
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data=5;
    head->next=NULL;
    //insertion at the beginning.
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = 4;
    temp->next = head;
    head = temp;

    struct Node *t;
    for(t=head;t!=NULL;t=t->next)
        {
           printf("%d\n",t->data);
        }
    //insertion at the end
    struct Node* New;
    New = (struct Node*)malloc(sizeof(struct Node));
    for(t=head; t->next!=NULL; t=t->next)
    {
        printf("enter the data of last node:\n");
        scanf("%d",&New->data);
        New->next = NULL;
        t->next = New;
    }

    printf("the updated list is:\n");
    for(t=head;t!=NULL;t=t->next)
        {
           printf("%d\n",t->data);
        }

    return 0;
}
