#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, s1=0, s2=0, s3=0, k=0;
    int a[] = {10,4,7,2,3,0}, b[] = {18,5,5,3,12,2,6,0};

    s1=sizeof(a)/sizeof(int);
    s2=sizeof(b)/sizeof(int);
    s3=(s1+s2);
    int c[s3];
    //printing the polynomial

    for(i=0;i<s1;i++)
        {
            printf("%dx^%d +",a[i],a[i+1]);
            i++;
        }

    printf("\n\t\t+\n");
    for(i=0;i<s2;i++)
        {
            printf("%dx^%d +",b[i],b[i+1]);
            i++;
        }

    i=1;
    j=1;

    while(i<s1 && j<s2)
    {
         if(a[i]<b[j])
        {
             c[k+1]=b[j];
             c[k]=b[j-1];
             j+=2;
             k+=2;
        }
        else if(a[i]>b[j])
        {
            c[k+1]=a[i];
            c[k]=a[i-1];
            i+=2;
            k+=2;
        }
        else
        {
            c[k+1]=a[i];
            c[k]=a[i-1]+b[j-1];
            k+=2;
            i+=2;
            j+=2;

        }
    }


    while(j<s2)
    {
            c[k+1]=a[i];
            c[k]=a[i-1]+b[j-1];
            k+=2;
            i+=2;
            j+=2;
    }

    printf("\n\t\t+\n");

    for(i=0;i<k;i++)
        {
            printf("%dx^%d +",c[i],c[i+1]);
            i++;
        }

    return 0;
}
