#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

struct Stack
{
    int top;
    int capacity;
    int *array;
};

struct Stack *CreateStack()
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = 10;
    stack->array = (int)malloc((stack->capacity)*sizeof(int));
    return stack;
}

void push(struct Stack* s, int x)
{
    if(s->top == s->capacity-1)
        {printf("\nOverFlow!!\n");
        return;}
    s->array[++s->top]= x;

}

int pop(struct Stack* s)
{
    if(s->top == -1)
        {printf("\nUnderFlow!\n");
        return INT_MIN;}
    return(s->array[s->top--]);
}

void stack_copy(struct Stack*s1, struct Stack*s2)
{
    while(s1->top!= -1)
        {push(s2, pop(s1));}
    while(s2->top!= -1)
        {push(s1, pop(s2));}
}

void print(struct Stack* )

int main()
{
    struct Stack *s1, *s2;
    s1 = CreateStack();
    s2 = CreateStack();

    push(s1, 10);
    push(s1, 20);
    push(s1, 30);
    push(s1, 40);
    push(s1, 50);
    push(s1, 60);


    return 0;
}
