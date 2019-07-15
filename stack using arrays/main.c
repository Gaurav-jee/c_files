#include <stdio.h>
#include <stdlib.h>

struct Arraystack
{
    int top;
    int capacity;
    int *array;
};

struct Arraystack *createStack(int cap)
{
    struct Arraystack *stack;
    stack = malloc(sizeof(struct Arraystack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return(stack);
}

int isFull(struct Arraystack *stack)
{
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);


}

int isEmpty(struct Arraystack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}

void Push(struct Arraystack *stack,int item)
{
    if(!isFull(stack))
    {
         stack->top++;
         stack->array[stack->top]=item;
    }

}

int Pop(struct Arraystack *stack)
{
    int item;
    if(!isEmpty(stack))
    {
        item = stack->array[stack->top];
        stack->top--;
        return(item);
    }
    else
    {
        return(-1);
    }
}


int main()
{
    int choice,item;
    struct Arraystack *stack;
    stack=createStack(4);
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nenter a number to store:\n");
        scanf("%d",&item);
        Push(stack,item);
        break;
    case 2:
        item = Pop(stack);
        if(item==-1)
            printf("stack is empty");
        else
        printf("popped value is :%d",item);
        break;
    case 3:
        exit(0);

    }
    }
return 0;
}
