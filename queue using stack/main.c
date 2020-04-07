//queue using stack
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int capacity;
    int *array;
    int top;
};

struct Stack* Create_stack(int capacity)
{
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    if(!stack)
        {printf("Memory Error!");}
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity*sizeof(int));
     if(!stack->array)
        {printf("Memory Error!");}
    return stack;
}

void push(int x)
{

}

int main()
{
    struct Stack* S;
    int n;
    printf("enter the size of the stack !!");
    scanf("%d", &n);
    S = Create_stack(n);
    printf("Hello world!\n");
    return 0;
}
