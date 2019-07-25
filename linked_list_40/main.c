#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head, *curr = NULL, *temp= NULL;

void create();
void display();
void insert_pos();
void append();

int main()
{
    int s=1;
    printf("\n\t\tLINKED LIST MENU ::\n");
    while(s!=0)
        {
            printf("\n\n0. to Exit\n");
            printf("1. Create linked list\n");
            printf("2. Display\n");
            printf("3. insert\n");
            printf("4. append\n");
            printf("press the option number!");
            scanf("%d",&s);
            switch (s)
            {
            case 1:
                {
                   create();
                   break;
                }
            case 2:
                {
                    display();
                    break;
                }
            case 3:
                {
                    insert_pos();
                    break;
                }
            case 4:
                {
                    append();
                    break;
                }
            }
        }

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

void insert_pos()
{
    struct node *custom,*t;
    int pos, i;
    printf("enter the position at which you want to insert the node");
    scanf("%d",&pos);
    printf("enter the data you want to enter !");
    t=head;
    for(i=1;i<pos-1;i++)
    {
        t=t->next;
    }

    custom = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&custom->data);
    custom->next = t->next;
    t->next=custom;
}

void append()
{
    struct node *t, *newNode = NULL;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("enter the node data you want to append:\n");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    t = head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=newNode;
}

