#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, sum=0, s1, count=0;
    int array[50];
    printf("enter the size of the array!");
    scanf("%d", &n);
    printf("enter the array!\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i==0)
            {printf("{");}

        printf("%d,\t", array[i]);

        if(i==n-1)
           {printf("}");}
    }

    printf("enter the sum value to search for:\n");
    scanf("%d", &sum);

    for(i=0;i<n;i++)
    {
        s1 = array[i];
        for(j=i+1;j<n;j++)
        {
            if(s1+array[j] == sum)
                count++;

        }
    }

    printf("%d", count);
    return 0;
}
