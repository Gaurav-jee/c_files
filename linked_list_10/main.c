#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node *head;

void insertNode(int data)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    while(t->next!=NULL)
    {
        if(head==NULL)
        {
            t->data = data;
            t->next=NULL;
            t=head;
        }
        else
        {
            t->data = data;
            t=t->next;
            t->next=NULL;
        }
    }

}

int main()
{
    int n, i, data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("enter the data of node %d",i);
        scanf("%d",&data);
        insertNode(data);
    }

    return 0;
}
