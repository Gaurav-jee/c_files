#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

void push(struct stack* post_exp, int data)
{
	if(isFull(post_exp)){
		printf("\nOverflow");}
	else
		post_exp->arr[++(post_exp->top)]=data;
		printf("\npushed");
}

int pop(struct stack* post_exp)
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

int isOperand(char c)
{
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
		return 1;
	else
		return 0;
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

int main()
{
	int i, n, k=-1;
	char exp[30], final_exp[30];

	struct stack* post_exp;
	printf("Enter the expression to convert to postfix!!\n");
	scanf("%s",exp);
	post_exp = create_stack(15);
	n = strlen(exp);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
		if(isOperand(exp[i]))
        {
			final_exp[++k] = exp[i];
        }
		else if(exp[i] == '(')
		{
		    push(post_exp, exp[i]);
		}
		else if(exp[i] == ')')
        {
			while(post_exp->arr[post_exp->top]!='(')
            {
                final_exp[++k] = pop(post_exp);
            }
            pop(post_exp);
        }
        else//in case of an operator !!!
        {
            while (get_prec(exp[i]) <= get_prec(peek(post_exp)))
            {
                final_exp[++k] = pop(post_exp);
            }
            push(post_exp, exp[i]);
        }
	}
	while(!isEmpty(post_exp))
    {
        final_exp[++k] = pop(post_exp);
    }

	printf("\n\n");
	//printing the final_exp
	for(i=0;i<=k;i++)
    {
        printf("%c",final_exp[i]);
    }
	return 0;
}
