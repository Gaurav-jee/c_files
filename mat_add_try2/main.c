#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, c1=0, c2=0, n, m;
    printf("enter the no. of rows and columns");
    scanf("%d %d",&n,&m);
    int a[n][m], b[n][m];
    //taking input of the arrays
    printf("enter the details of the first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
                c1++;
        }
    }

    printf("enter the details of the second matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
            if(b[i][j]!=0)
                c2++;
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


    int r2[c2+1][3];
    k=1;
    r2[0][0]=n;
    r2[0][1]=m;
    r2[0][2]=c2;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i][j]!=0)
            {
                r2[k][0]=i;
                r2[k][1]=j;
                r2[k][2]=b[i][j];
                k++;
            }
        }
    }

    printf("\nthe first row_triplet form is:\n");

    for(i=0;i<=c1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",r1[i][j]);
        }
        printf("\n");
    }

    printf("\nthe second row_triplet form is:\n");

    for(i=0;i<=c2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",r2[i][j]);
        }
        printf("\n");
    }

    int l =c1+c2;
    int r3[l][3];

    k=1;
    r3[0][0]=3;
    r3[0][1]=3;

    for(i=1;i<=l;i++)
    {
        if(r1[i][2]!=0 || r2[i][2]!=0)
        {
            if(r1[i][0]==r2[i][0] && r1[i][1]==r2[i][1])
            {
                r3[k][0]=r2[i][0];
                r3[k][1]=r2[i][1];
                r3[k][2]=r1[i][2]+r2[i][2];
                k++;
                printf("1\t");
            }
            else if(r1[i][0]!=r2[i][0] || r1[i][1]!=r2[i][1])
            {
                if(r1[i][2]!=0 && r2[i][2]!=0)
                {
                    r3[k][0]=r1[i][0];
                    r3[k][1]=r1[i][1];
                    r3[k][2]=r1[i][2];
                    k++;
                    printf("1\t");
                    r3[k][0]=r2[i][0];
                    r3[k][1]=r2[i][1];
                    r3[k][2]=r2[i][2];
                    k++;
                    printf("1\t");
                }
                else if(r1[i][2]!=0)
                {
                    r3[k][0]=r1[i][0];
                    r3[k][1]=r1[i][1];
                    r3[k][2]=r1[i][2];
                    k++;
                    printf("1\t");
                }
                else if(r2[i][2]!=0)
                {
                    r3[k][0]=r2[i][0];
                    r3[k][1]=r2[i][1];
                    r3[k][2]=r2[i][2];
                    k++;
                    printf("1\t");
                }
            }
        }
    }

    printf("\n%d\n",k);
    r3[0][2]=k;

    printf("\n\nthe sum row_triplet form is:\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",r3[i][j]);
        }
        printf("\n");
    }

        return 0;
}
