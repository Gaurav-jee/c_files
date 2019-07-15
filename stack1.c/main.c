#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char* X,char* Y)
{
    char ch;
    ch = *X;
    *X = *Y;
    *Y = ch;

}

void permutaion(char *s,int i, int n)
{
    static int count; int j;
    if (i == n)
    {
        count++;
        printf("%s\t",s);

    }
    else
        for(j=i;i<=n;j++)
        {
            swap((s+i),(s+j));
            permutaion(s,i+1,n);
            swap((s+i),(s+j));
        }
}



int main()
{
    char *s;
    printf("Enter a string:\n");
    gets(s);
    permutaion(s,0,strlen(s)-1);
    return(0);

}
