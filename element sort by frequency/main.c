#include <stdio.h>
#include <stdlib.h>

struct Sort
{
    int element;
    int frequency;
}sorted[10];

int main()
{
    int i, n, j, k=0, p=0, u=0;
    int a[15];
    printf("enter the no. of elements!\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            sorted[k].element = a[i];
            sorted[p].frequency =1;
            u++;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[j] == sorted[k].element)
            {
                sorted[p].frequency = sorted[p].frequency +1;
                a[j] = -1;
            }
        }
        k++;
        p++;
    }

    for(i=0;i<u;i++)
    {
        printf("Element ::%d Frequency::%d\n", sorted[i].element, sorted[i].frequency);
    }

    return 0;
}
