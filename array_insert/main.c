#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, array[11], pos=0, data=0, j=0;

    printf("enter the 10 elements of the array\n");
    //taking input
    for(i=0;i<10;i++)
    {
            printf("\n%d no. element:\n",i+1);
            scanf("%d",&array[i]);
    }

    printf("enter the position and data :\n");
    scanf("%d %d",&pos, &data);
    pos--;
    for(j=9;j>=pos;j--)
    {
        if(j==pos)
        {
            array[j+1]=array[j];
            array[j]=data;
        }
        else
        {
            array[j+1]=array[j];
        }
    }
    printf("the updated array is:");
    for(i=0;i<11;i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}
