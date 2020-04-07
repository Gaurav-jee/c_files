#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
}*top = NULL, *head =NULL;

struct node* create_node(int d)
{
        struct node* temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = d;
        temp->next = NULL;
        return temp;
}

void push(int d)
{
    struct node* t = create_node(d);
    if(top == NULL)
    {
        top = t;
    }

    else
    {
    t->next = top;
    top = t;
    }
}

int pop()
{
    int x;
    struct node* t = top;
    top = top->next;
    x = t->data;
    free(t);
    return x;
}

void display(struct node *top)
{
    struct node *t;
    for(t=top;t!=NULL;t=t->next)
    {
        printf("|%d|\n", t->data);
    }
}

struct node* reverse(struct node* t)
{
    if (t == NULL)
        return NULL;
    if (t->next == NULL){
        head = t;
        return t;
    }
    struct node* node1 = reverse(t->next);
    node1->next = t;
    t->next = NULL;
    return t;
}

int main()
{
    int c, n;
    while(1)
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. REVERSE\n");
        printf("5. EXIT\n");

        printf("Enter your choice : ");
        scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf("Enter the data : ");
        scanf("%d",&n);
        push(n);
        break;
    case 2:
        pop();
        break;
    case 3:
        display(top);
        break;
    case 4:
        reverse(top);
        display(head);
        break;
    default:
        exit(0);
    }
    }
    return 0;
}
