#include<stdio.h>

struct student
{
    int roll;
    char name[10];
}stud[10];

int main()
{
    int i=0, n=0;
    struct student *ptr;
    ptr = stud;

    printf("Enter the no of students\n");
    scanf("%d",&n);

    printf("enter student's roll no. and name\n");

    for(i=0;i<n;i++)
    {
        //printf("%d",i);
        scanf("%d%s", &ptr->roll, ptr->name);
        ptr++;
    }

    ptr = stud;

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\n",ptr->roll,ptr->name);
        ptr++;
    }

    return 0;
}
