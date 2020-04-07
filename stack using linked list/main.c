#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
}*top;

void push();
void pop();
void delete_stack();
void peek();
void IsEmpty();
void IsFull();

int main()
{
    int c, n;
    while(1)
    {
        printf("\t\tEnter your choice!\n");
        printf("\t1. Push\n");
        printf("\t2. Pop\n");
        printf("\t3. Delete the stack\n");
        printf("\t4. Peek\n");
        printf("\t5. Is Empty\n");
        printf("\t6. Is Full\n");
        printf("\t7. Exit\n");

        scanf("%d", &c);

        switch (c)
        {
            case 1:
                printf("Enter the element you want to push !\n");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                //delete_stack();
                break;
            case 4:
                //peek();
                break;
            case 5:
                //IsEmpty();
                break;
            case 6:
                //IsFull();
                break;
            case 7:
                exit(0);

        }
    }
    return 0;
}

void push(int x)
{
    struct stack *temp, *new1 = (struct stack*)malloc(sizeof(struct stack));
    new1->data = x;
    new1->next = NULL;

    new1->next = top;
    top = new1;
}

void pop()
{
    struct stack *t;
    if(top==NULL)
    {
        printf("\nUnderFlow!!");
    }
    else
    {
        if(top->next == NULL)
        {
            t = top;
            printf("%d",t->data);
            top = NULL;
            free(t);
        }
        else
        {
            t = top;
            printf("%d",t->data);
            top = top->next;
            free(t);
        }

    }
}
