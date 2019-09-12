#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, c1=0, n, m;
    printf("enter the no. of rows and columns");
    scanf("%d %d",&n,&m);
    int a[n][m];
    //taking input of the arrays
    printf("enter the details of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
                c1++;
        }
    }

    //creating the row matrix
    int r1[c1+1][3];
    int k=1;
    r1[0][0]=n;
    r1[0][1]=m;
    r1[0][2]=c1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                r1[k][0]=i;
                r1[k][1]=j;
                r1[k][2]=a[i][j];
                k++;
            }

        }
    }


    printf("\nthe row_triplet form is:\n");

    for(i=0;i<=c1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",r1[i][j]);
        }
        printf("\n");
    }


    //transpose of the matrix.
    int r2[c1][3];
    k=1;
    r2[0][0]=m;
    r2[0][1]=n;
    r2[0][2]=c1;

    for(i=0;i<m;i++)
    {
       for(j=1;j<=c1;j++)
       {
           if(i==r1[j][1])
           {
                r2[k][0]=r1[j][1];
                r2[k][1]=r1[j][0];
                r2[k][2]=r1[j][2];
                k++;
           }
       }
    }



    printf("\n\nthe transpose row_triplet form is:\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",r2[i][j]);
        }
        printf("\n");
    }

        return 0;
}

