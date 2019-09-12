#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int n, m, i, j;
    printf("enter the dimensions!\n");
    scanf("%d %d", &n, &m);

    printf("enter the elements!\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %d",&a[i][j]);
        }
    }

    printf("The matrix is!\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //converting to upper triangular matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j!=i;j++)
        {
            a[i][j]=0;
        }
        printf("\n");
    }
    printf("The upper triangular matrix is!\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    printf("enter the indexing of the element you want to access !!\n");
    scanf("%d %d", &i, &j);
    printf("The required element is ::%d\n",a[i][j]);
    return 0;
}
