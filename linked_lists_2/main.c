#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

void createNodeList(int n)
{
    struct Node *New_node, *temp;
    int num, i;
    head = (struct Node *)malloc(sizeof(struct Node));

    if(head == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        temp = head;

        for(i=2; i<=n; i++)
        {
            New_node = (struct Node *)malloc(sizeof(struct Node));
            if(New_node == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                New_node->data = num;
                New_node->next = NULL;

                temp->next = New_node;
                temp = temp->next;
            }
        }
    }


}
void Display()
{
    struct Node *t;
    t = head;
    while(t!=NULL)
    {
        printf("|%d|-->",t->data);
        t=t->next;
    }
}

int main()
{
    int n;
    printf("enter the number of nodes in the list:\n");
    scanf("%d",&n);
    createNodeList(n);
    printf("the created list!!\n");
    Display();
    return 0;
}
