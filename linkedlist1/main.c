#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *START=NULL;
//function to create a node
struct node* createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}

void insertNode()
{
    struct node *temp,*t;
    temp=createNode();
    printf("enter a number!");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
            t->link=temp;
        }
    }
}

int main()
{
    printf("Hello world!\n");
    insertNode();
    return 0;
}
