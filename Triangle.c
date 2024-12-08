#include <stdio.h>

int main()
{
    int i,N=4,j;
    for(i=1;i<=N;i++)
    {
        for (j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
     printf("\n");
    }
    return 0;
}
