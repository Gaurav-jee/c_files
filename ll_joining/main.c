#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head1, *head2, *temp, *current;

int main()
{
    char ch="y";
    printf("enter the first list\n");
    do
    {
        current = (struct Node*)malloc(sizeof(struct Node));
        printf("enter the data \n");
        scanf("&d",&current->data);
        current->next = NULL;
    }while(ch = "y")
    return 0;
}
