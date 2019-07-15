#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0;
    int a[5]={0,2,4,6,8}, b[7]={1,3,5,7,9,10,11}, c[12];
    printf("the first array is:\n");
    for(i=0;i<5;i++)
        {
            printf("%d\n",a[i]);
        }
    printf("\n\nthe second array is:");
    for(j=0;j<7;j++)
        {
            printf("%d\n",b[j]);
        }
    //merging them
    int k=0;
    i=0, j=0;

    while(i<5 && j<7)
    {
        if(a[i]>b[j])
        {
                c[k]=b[j];
                j++;
                k++;
        }
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }


    while(j<7)
    {
        c[k]=b[j];
        j++;
        k++;
    }


    for(i=0;i<12;i++)
    {
        printf("\n%d\t",c[i]);

    }


    return 0;
}
