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

    printf("enter data :\n");
    scanf("%d",&data);

    for(j=0;j<10;j++)
    {
        if(array[j-1]<=data && data<=array[j+1] )
        {
            pos=j+1;
            printf("\n\n%d\n",j);
            break;
        }
    }

    for(i=9;i>=pos;i--)
    {
        if(i==pos)
        {
            array[i+1]=array[i];
            array[i]=data;
        }
        else
        {
            array[i+1]=array[i];
        }
    }


    printf("the updated array is:");
    for(i=0;i<11;i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}
