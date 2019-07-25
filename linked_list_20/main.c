#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *head)
{
    struct Node *t;
    t = head;
    int count=0;
    while(t->next!=NULL)
    {
        printf("|%d|-->", t->data);
        t = t->next;
        count++;
    }
    printf("%d",count);
}

int main()
{
    int data;
    printf("enter the data of the first Node!!\n");
    scanf("%d",&data);
    struct Node *first, *head;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = data;
    first->next = NULL;
    first = head;
    traverse(head);
    return 0;
}
