#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *New_node();
void create();
void display();
void push();
void append();
void insert_pos();

int main()
{
    struct node *head;
    int c;
    while(1)
    {
        printf("\n\nselect the option you want to do:\n");
        printf("Press 1. To create a linked list:\n");
        printf("Press 2. To display the Linked list:\n");
        printf("Press 3. To insert a node before the first:\n");
        printf("Press 4. To insert a node at the end:\n");
        printf("Press 5. To insert a node at a given position:\n");
        printf("Press 0. To Exit:\n");
        scanf("%d",&c);
        switch(c)
        {
        case 0:
            exit(0);
        case 1:
            create(&head);
            break;
        case 2:
            display(&head);
            break;
        case 3:
            push(&head);
            break;
        case 4:
            append(&head);
            break;
        case 5:
            insert_pos(&head);
            break;
        }
    }
    return 0;
}

struct node *New_node()
{
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
    if(!t)          //checking for memory errors!!
    {
        printf("Memory Error!!");
    }
    printf("enter the node data:\n");
    scanf("%d",&t->data);
    t->next = NULL;
    t->prev = NULL;
    return t;
}

void create(struct node **h)
{
    int i, n;
    struct node *current, *temp;
    printf("enter the number of nodes you want!\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        current = New_node();
        if(i==0)
        {
            *h=temp=current;
        }
        else
        {
            temp->next = current;
            temp = current->prev;
            temp=current;
        }

    }
}

void display(struct node **h)
{
    struct node *t;
    t = *h;
    while(t!=NULL)
    {
        printf("%d=>",t->data);
        t=t->next;
    }
}

void push(struct node **h)
{
    struct node *t, *head;
    head = *h;
    t = New_node();
    t->next = head;
    head->next->prev = t;
    head = t;
    *h = head;

}

void append(struct node **h)
{
    struct node *t, *current;
    t = *h;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    current = New_node();
    t->next=current;
    current->prev = t;
}

void insert_pos(struct node **h)
{
    struct node *t, *current;
    int pos;
    printf("enter the position:\n");
    scanf("%d",&pos);
    current = New_node();
    for(int i=0;i<=pos;i++)
    {
        t=t->next;
    }
    printf("%d\n",t->data);
    current->next = t->next;
    t->next->prev = current;
    current->prev = t;
    t->next = current;

}
