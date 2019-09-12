#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head, *temp = NULL, *current = NULL;

int main()
{
    int n;
    printf("enter the number of nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        current = (struct Node*)malloc(sizeof(struct Node));
        printf("enter the data of the node");
        scanf("%d",&current->data);
        current->next = NULL;

        if(i==0)
        {
            head=temp=current;
        }
        else
        {
            temp->next = current;
            temp = current;
        }
        temp->next = NULL;
    }

    temp = head;

    while(temp!=NULL)
    {
        printf("%d=>",temp->data);
        temp=temp->next;

    }

    return 0;
}
