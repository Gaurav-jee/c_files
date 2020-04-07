#include <stdio.h>
#include <stdlib.h>

int s[10];
int top = 0;

void push(int x)
{
    if(top > 10)
    {
        printf("Overflow !! \n");
    }
    else
    s[++top] = x;
}

int pop()
{
    int x;
    if(top == 0)
    {
        printf("Underflow!!\n");
    }
    else
    {
    x = s[top];
    top--;
    return x;
    }
}

void display()
{
    int x = top;
    while(x!=0)
    {
        printf("|%d|\n", s[x]);
        x--;
    }
}

void reverse()
{
    int s1[10];
    int x = 1;
    while(top > 0)
    {
    s1[x] = pop();
    x++;
    }

    top = x;
    for (int i = 1; i <= x; i++)
        {
        s[i] = s1[i];
        }
}

int main()
{
    int c, a;
    while(1)
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. REVERSE\n");
        printf("Enter any other number to exit\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("Enter data\n");
            scanf("%d", &a);
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            reverse();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}
