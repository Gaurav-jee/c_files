#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct stack
{
	int top;
	char *arr;
	int capacity;
};

struct stack* create_stack(int capacity)
{
	struct stack* stack;
	stack = (struct stack*)malloc(sizeof(struct stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->arr = (char*)malloc(capacity* sizeof(char));
	return stack;
}

int isEmpty(struct stack* post_exp)
{
	if(post_exp->top == -1)
		return 1;
	return 0;
}

int isFull(struct stack* post_exp)
{
	if(post_exp->top == post_exp->capacity)
		return 1;
	return 0;
}

void push(struct stack* post_exp,char data)
{
	if(isFull(post_exp)){
		printf("\nOverflow");}
	else
		post_exp->arr[++(post_exp->top)]=data;
		printf("\npushed");
}

char pop(struct stack* post_exp)
{
	if(isEmpty(post_exp))
		printf("Underflow!");
	else
		return(post_exp->arr[(post_exp->top)--]);
}

char peek(struct stack* post_exp)
{
    if(!isEmpty(post_exp))
        return (post_exp->arr[post_exp->top]);
}

int get_prec(char op)
{
	switch (op)
	{
    case '^':
        return 3;
	case '*':
	case '/':
		return 2;
	case '+':
	case '-':
		return 1;
	default:
		return -1;
	}
}

int evaluate_postfix(char* exp)
{
    int i, A, B;
    struct stack* post_exp = create_stack(strlen(exp));
    for(i=0;exp[i];i++)
    {
        if(isdigit(exp[i]))
        {
            push(post_exp, exp[i]-'0');
        }
        else
        {
            A = pop(post_exp);
            B = pop(post_exp);
            switch(exp[i])
            {
                case '+':
                    push(post_exp, B+A);
                    break;
                case '-' :
                    push(post_exp, B-A);
                    break;
                case '*' :
                    push(post_exp, B * A);
                    break;
                case '/' :
                    push(post_exp, B / A);
                    break;
                case '^' :
                    push(post_exp, B ^ A);
                    break;
            }
        }
    }
    return pop(post_exp);
}

int main()
{
    char exp[50];
    printf("enter the postfix expression");
    scanf("%s",exp);
	printf("\n The answer is :\t%d", evaluate_postfix(exp));
	return 0;
}
