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

    printf("enter data to delete :\n");
    scanf("%d",&data);

    for(i=9;i>=0;i--)
    {
        if(array[i]==data)
        {
            array[i]=array[i+1];
            for(int k=i+1;k<10-2;k++)
            {
                array[k]=array[k+1];
            }
            break;
        }
    }


    printf("the updated array is:");
    for(i=0;i<11;i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}
